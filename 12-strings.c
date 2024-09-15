#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";

    // Concatenating strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Length of a string
    int len = strlen(str1);
    printf("Length of concatenated string: %d\n", len);

    // Copying a string
    char str3[20];
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    return 0;
}
