#include <stdio.h>

int main() {
    // Basic data types in C
    int i = 100;         // Integer
    float f = 3.14;      // Floating-point
    double d = 3.14159;  // Double precision float
    char ch = 'A';       // Character

    // Print sizes of data types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));

    return 0;
}
