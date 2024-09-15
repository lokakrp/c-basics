#include <stdio.h>

int main() {
    int x = 5;

    // If-else statement
    if (x > 0) {
        printf("x is positive\n");
    } else {
        printf("x is non-positive\n");
    }

    // While loop
    while (x > 0) {
        printf("x = %d\n", x);
        x--;
    }

    // For loop
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    return 0;
}
