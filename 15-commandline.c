#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if at least two arguments are provided
    if (argc < 2) {
        printf("Usage: %s <argument>\n", argv[0]);
        return 1;
    }

    // Print the arguments
    printf("Program name: %s\n", argv[0]);
    printf("Argument passed: %s\n", argv[1]);

    return 0;
}
