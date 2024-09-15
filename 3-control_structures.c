#include <stdio.h>

int main() {
    int x = 5;                              // Declare an integer variable x and initialize it to 5

    // If-else statement
    if (x > 0) {                            // Check if x is greater than 0
        printf("x is positive\n");          // If true, print "x is positive"
    } else {
        printf("x is non-positive\n");      // If false, print "x is non-positive"
    }

    // While loop
    while (x > 0) {                         // Continue looping as long as x is greater than 0
        printf("x = %d\n", x);              // Print the current value of x
        x--;                                // Decrement x by 1
    }
    // When x becomes 0, the while loop stops

    // For loop
    for (int i = 0; i < 5; i++) {           // Initialize i to 0; loop as long as i is less than 5; increment i by 1 after each iteration
        printf("i = %d\n", i);              // Print the current value of i
    }
    // The for loop will execute 5 times, printing values from 0 to 4

    return 0;                               // Return 0 to indicate successful completion of the program
}
