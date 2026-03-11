#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

#define PORT 5555
#define BUF_SIZE 1024

// Function to handle each client
void handle_client(int client_sock) {
    char filename[256];
    char buffer[BUF_SIZE];
    FILE *fp;
    ssize_t n;

    // Receive filename
    n = recv(client_sock, filename, sizeof(filename), 0);
    if (n <= 0) {
        close(client_sock);
        return;
    }
    filename[n] = '\0';

    printf("Client requested file: %s\n", filename);

    // Open file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        const char *msg = "ERROR: File not found\n";
        send(client_sock, msg, strlen(msg), 0);
    } else {
        while ((n = fread(buffer, 1, BUF_SIZE, fp)) > 0) {
            send(client_sock, buffer, n, 0);
        }
        fclose(fp);
    }

    close(client_sock);
    exit(0);
}

int main() {
    int sockfd, client_sock;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_len = sizeof(client_addr);

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) { perror("socket"); exit(1); }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("bind"); close(sockfd); exit(1);
    }

    if (listen(sockfd, 5) < 0) {
        perror("listen"); close(sockfd); exit(1);
    }

    printf("Concurrent FTP server running on port %d...\n", PORT);

    while (1) {
        client_sock = accept(sockfd, (struct sockaddr*)&client_addr, &addr_len);
        if (client_sock < 0) { perror("accept"); continue; }

        printf("Connected to client: %s:%d\n",
               inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

        if (fork() == 0) {
            close(sockfd);
            handle_client(client_sock);
        } else {
            close(client_sock);
        }
    }

    close(sockfd);
    return 0;
}

