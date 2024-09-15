#include <stdio.h>

int main() {
    // Declare an array of integers
    int numbers[5] = {1, 2, 3, 4, 5};

    // Access and print elements of the array
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
