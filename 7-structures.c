#include <stdio.h>

// Define a structure for a point in 2D space
struct Point {
    int x;
    int y;
};

int main() {
    // Declare and initialize a struct
    struct Point p = {10, 20};

    // Access and print struct members
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);

    return 0;
}
