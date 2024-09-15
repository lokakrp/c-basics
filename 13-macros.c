#include <stdio.h>

// Define a macro for the maximum of two numbers
#define MAX(a,b) ((a) > (b) ? (a) : (b))

// Define a constant using #define
#define PI 3.14159

int main() {
    int x = 5, y = 10;

    // Using macro to get the maximum value
    printf("Max of %d and %d is %d\n", x, y, MAX(x, y));

    // Using the constant PI
    printf("Value of PI: %.5f\n", PI);

    return 0;
}
