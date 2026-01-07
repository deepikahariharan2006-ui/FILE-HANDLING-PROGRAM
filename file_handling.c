#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char data[100];

    // Create and write
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Hello, this is a file handling demo.\n");
    fclose(fp);

    // Read
    fp = fopen("example.txt", "r");
    fgets(data, 100, fp);
    printf("Reading from file: %s", data);
    fclose(fp);

    // Append
    fp = fopen("example.txt", "a");
    fprintf(fp, "Appending new line to file.\n");
    fclose(fp);

    // Final read
    fp = fopen("example.txt", "r");
    printf("\nFinal file content:\n");
    while (fgets(data, 100, fp) != NULL) {
        printf("%s", data);
    }
    fclose(fp);

    return 0;
}
