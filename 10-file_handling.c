#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open a file in write mode
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write to the file
    fprintf(file, "This is a test file.\n");

    // Close the file
    fclose(file);

    // Reopen the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and print the file content
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
