#include <stdio.h>

int main() {
    // Declare a 2D array (matrix) of size 2x3
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Loop through rows and columns to print matrix elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
