#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;  // Pointer stores the address of x

    // Print the value of x and its address
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", ptr);

    // Dereference pointer to access value
    printf("Value at the address stored in ptr: %d\n", *ptr);

    return 0;
}
