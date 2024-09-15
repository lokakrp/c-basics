#include <stdio.h>

int main() {
    int a = 5;   // Binary: 0101
    int b = 9;   // Binary: 1001

    // Bitwise AND
    printf("a & b = %d\n", a & b);  // Binary: 0001 (1)

    // Bitwise OR
    printf("a | b = %d\n", a | b);  // Binary: 1101 (13)

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b);  // Binary: 1100 (12)

    // Bitwise NOT
    printf("~a = %d\n", ~a);        // Binary: 11111111111111111111111111111010 (-6 in two's complement)

    // Left shift
    printf("a << 1 = %d\n", a << 1); // Binary: 1010 (10)

    // Right shift
    printf("b >> 1 = %d\n", b >> 1); // Binary: 0100 (4)

    return 0;
}
