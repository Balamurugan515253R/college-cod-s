#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8075
#define BUFFER 1024
#define SERVER_IP "127.0.0.1"

// Connect to server
int connect_server() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) { perror("socket"); exit(1); }

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    inet_pton(AF_INET, SERVER_IP, &addr.sin_addr);

    if (connect(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
        perror("connect"); exit(1);
    }
    return sock;
}

// Upload file to server
void send_file(int sock, char *filename) {
    char buffer[BUFFER];
    sprintf(buffer, "SEND %s", filename);
    send(sock, buffer, strlen(buffer), 0);

    FILE *fp = fopen(filename, "rb");
    if (!fp) { perror("fopen"); return; }

    int bytes;
    while ((bytes = fread(buffer, 1, BUFFER, fp)) > 0)
        send(sock, buffer, bytes, 0);

    send(sock, "END", 3, 0);
    fclose(fp);

    bytes = recv(sock, buffer, BUFFER, 0);
    if (bytes > 0) {
        buffer[bytes] = '\0';
        if (strncmp(buffer, "OK", 2) == 0) printf("Upload successful.\n");
        else printf("Upload failed.\n");
    }
}

// List files on server
void list_files(int sock) {
    send(sock, "LIST", 4, 0);

    char buffer[BUFFER];
    int bytes;
    printf("\nFiles on server:\n");
    while (1) {
        bytes = recv(sock, buffer, BUFFER, 0);
        if (bytes <= 0) break;
        buffer[bytes] = '\0';
        if (strncmp(buffer, "END", 3) == 0) break;
        printf("%s", buffer);
    }
}

// Download file from server
void recv_file(int sock, char *filename) {
    char buffer[BUFFER];
    sprintf(buffer, "RECV %s", filename);
    send(sock, buffer, strlen(buffer), 0);

    FILE *fp = fopen(filename, "wb");
    if (!fp) { perror("fopen"); return; }

    int bytes;
    while (1) {
        bytes = recv(sock, buffer, BUFFER, 0);
        if (bytes <= 0) break;
        if (bytes == 3 && strncmp(buffer, "EOF", 3) == 0) break;
        fwrite(buffer, 1, bytes, fp);
    }
    fclose(fp);
    printf("Download complete.\n");
}

// Change directory on server
void change_directory(int sock, char *dir_name) {
    char buffer[BUFFER];
    sprintf(buffer, "CD %s", dir_name);
    send(sock, buffer, strlen(buffer), 0);

    int bytes = recv(sock, buffer, BUFFER, 0);
    if (bytes > 0) {
        buffer[bytes] = '\0';
        if (strncmp(buffer, "OK", 2) == 0) printf("Directory changed successfully.\n");
        else printf("Failed to change directory.\n");
    }
}

int main() {
    int sock = connect_server();
    int choice;
    char filename[256], dirname[256];
    char input[10];

    while (1) {
        printf("\n--- FTP Client Menu ---\n");
        printf("1. Send File\n2. List Files\n3. Download File\n4. Change Directory\n5. Exit\nChoice: ");

        if (!fgets(input, sizeof(input), stdin)) continue;  // read menu as string
        choice = atoi(input);  // convert to integer

        if (choice == 1) {
            printf("Enter file name to upload: ");
            fgets(filename, sizeof(filename), stdin);
            filename[strcspn(filename, "\n")] = 0;
            send_file(sock, filename);

        } else if (choice == 2) {
            list_files(sock);  // List files only

        } else if (choice == 3) {
            printf("Enter file name to download: ");
            fgets(filename, sizeof(filename), stdin);
            filename[strcspn(filename, "\n")] = 0;
            recv_file(sock, filename);

        } else if (choice == 4) {
            printf("Enter directory name to change: ");
            fgets(dirname, sizeof(dirname), stdin);
            dirname[strcspn(dirname, "\n")] = 0;
            change_directory(sock, dirname);

        } else if (choice == 5) {
            send(sock, "QUIT", 4, 0);
            break;

        } else {
            printf("Invalid choice, try again.\n");
        }
    }

    close(sock);
    printf("Disconnected from server.\n");
    return 0;
}

