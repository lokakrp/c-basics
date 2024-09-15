#include <stdio.h>

// Typedef for renaming an existing type
typedef unsigned long ulong;
typedef int integer;

int main() {
    ulong largeNumber = 1000000;
    integer smallNumber = 42;

    printf("Large number: %lu\n", largeNumber);
    printf("Small number: %d\n", smallNumber);

    return 0;
}
