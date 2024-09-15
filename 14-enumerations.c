#include <stdio.h>

// Define an enumeration for colors
enum Color { RED, GREEN, BLUE };

int main() {
    enum Color favoriteColor;

    // Assign a value to the enum variable
    favoriteColor = GREEN;

    // Switch-case to print the color
    switch (favoriteColor) {
        case RED:
            printf("Favorite color is Red\n");
            break;
        case GREEN:
            printf("Favorite color is Green\n");
            break;
        case BLUE:
            printf("Favorite color is Blue\n");
            break;
        default:
            printf("Unknown color\n");
    }

    return 0;
}
