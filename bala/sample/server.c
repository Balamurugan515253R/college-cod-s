#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <dirent.h>
#include <signal.h>

#define PORT 8075
#define BUFFER 1024

// ---------------- File Transfer Handlers ----------------
void handle_send(int sock, char *filename) {
    char buffer[BUFFER];
    FILE *fp = fopen(filename, "wb");
    if (!fp) {
        perror("fopen");
        send(sock, "FAIL", 4, 0);
        return;
    }

    int n;
    while ((n = recv(sock, buffer, BUFFER, 0)) > 0) {
        if (n == 3 && strncmp(buffer, "END", 3) == 0) break;
        fwrite(buffer, 1, n, fp);
    }
    fclose(fp);
    send(sock, "OK", 2, 0);
    printf("File %s received successfully.\n", filename);
}

void handle_list(int sock) {
    DIR *dir = opendir(".");
    if (!dir) {
        perror("opendir");
        return;
    }

    struct dirent *entry;
    char buffer[BUFFER];

    while ((entry = readdir(dir)) != NULL) {
        // skip "." and ".."
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
            continue;
        snprintf(buffer, sizeof(buffer), "%s\n", entry->d_name);
        send(sock, buffer, strlen(buffer), 0);
    }

    send(sock, "END\n", 4, 0);  // signal end of list
    closedir(dir);
    printf("File list sent to client.\n");
}

void handle_recv(int sock, char *filename) {
    char buffer[BUFFER];
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        perror("fopen");
        send(sock, "FAIL", 4, 0);
        return;
    }

    int n;
    while ((n = fread(buffer, 1, BUFFER, fp)) > 0)
        send(sock, buffer, n, 0);

    send(sock, "EOF", 3, 0);
    fclose(fp);
    printf("File %s sent successfully.\n", filename);
}

void handle_cd(int sock, char *dirname) {
    if (chdir(dirname) == 0) {
        send(sock, "OK", 2, 0);
        printf("Changed directory to %s\n", dirname);
    } else {
        perror("chdir");
        send(sock, "FAIL", 4, 0);
    }
}

// ---------------- Client Handler ----------------
void client_handler(int sock) {
    char buffer[BUFFER];

    while (1) {
        int bytes = recv(sock, buffer, BUFFER, 0);
        if (bytes <= 0) break;
        buffer[bytes] = '\0';

        if (strncmp(buffer, "SEND", 4) == 0) {
            handle_send(sock, buffer + 5);
        } else if (strncmp(buffer, "LIST", 4) == 0) {
            handle_list(sock);
        } else if (strncmp(buffer, "RECV", 4) == 0) {
            handle_recv(sock, buffer + 5);
        } else if (strncmp(buffer, "CD", 2) == 0) {
            handle_cd(sock, buffer + 3);
        } else if (strncmp(buffer, "QUIT", 4) == 0) {
            printf("Client requested quit.\n");
            break;
        }
    }

    close(sock);
    printf("Client disconnected.\n");
    exit(0);
}

// ---------------- Main Server ----------------
int main() {
    int server_sock, client_sock;
    struct sockaddr_in server_addr, client_addr;
    socklen_t clen = sizeof(client_addr);

    signal(SIGCHLD, SIG_IGN); // ignore zombie children

    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock < 0) { perror("socket"); exit(1); }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("bind"); exit(1);
    }

    if (listen(server_sock, 5) < 0) { perror("listen"); exit(1); }

    printf("Concurrent FTP server running on port %d...\n", PORT);

    while (1) {
        client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &clen);
        if (client_sock < 0) { perror("accept"); continue; }

        printf("New client connected: %s:%d\n",
               inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

        if (fork() == 0) { // Child
            close(server_sock);
            client_handler(client_sock);
        } else { // Parent
            close(client_sock);
        }
    }

    close(server_sock);
    return 0;
}

