#include <stdio.h>

// Function declaration
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

// Function that accepts a function pointer
int compute(int (*operation)(int, int), int x, int y) {
    return operation(x, y);
}

int main() {
    int a = 10, b = 5;

    // Function pointer
    int (*func_ptr)(int, int);

    // Assign add function to the pointer and call it
    func_ptr = &add;
    printf("Addition: %d\n", compute(func_ptr, a, b));

    // Assign subtract function to the pointer and call it
    func_ptr = &subtract;
    printf("Subtraction: %d\n", compute(func_ptr, a, b));

    return 0;
}
