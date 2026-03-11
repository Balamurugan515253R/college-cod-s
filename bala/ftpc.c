#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 5555
#define BUF_SIZE 1024

int main(int argc, char *argv[]) {
    int sockfd;
    struct sockaddr_in serv_addr;
    char filename[256];
    char buffer[BUF_SIZE];
    ssize_t n;

    if (argc != 2) {
        printf("Usage: %s <server_ip>\n", argv[0]);
        exit(1);
    }

    // Create socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) { perror("socket"); exit(1); }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    serv_addr.sin_addr.s_addr = inet_addr(argv[1]);

    if (connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("connect"); close(sockfd); exit(1);
    }

    // Ask filename
    printf("Enter filename to download: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;

    // Send filename
    send(sockfd, filename, strlen(filename), 0);

    // First recv (check if error or file data)
    n = recv(sockfd, buffer, BUF_SIZE, 0);
    if (n <= 0) {
        printf("No response from server.\n");
        close(sockfd);
        exit(1);
    }
    buffer[n] = '\0';

    // If server sent error
    if (strncmp(buffer, "ERROR", 5) == 0) {
        printf("Server response: %s\n", buffer);
        close(sockfd);
        exit(1);
    }

    // Otherwise save to file
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        perror("fopen");
        close(sockfd);
        exit(1);
    }

    fwrite(buffer, 1, n, fp);

    // Receive rest of file
    while ((n = recv(sockfd, buffer, BUF_SIZE, 0)) > 0) {
        fwrite(buffer, 1, n, fp);
    }

    fclose(fp);
    close(sockfd);

    printf("File '%s' downloaded and saved successfully.\n", filename);
    return 0;
}

