#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize two strings
    char str1[20] = "Hello";   // str1 contains "Hello"
    char str2[20] = "World";   // str2 contains "World"

    // Concatenating str2 to the end of str1
    strcat(str1, str2);        // str1 becomes "HelloWorld"
    printf("Concatenated string: %s\n", str1);  // Output: HelloWorld

    // Finding the length of the concatenated string
    int len = strlen(str1);    // len will be the length of "HelloWorld", which is 10
    printf("Length of concatenated string: %d\n", len);  // Output: 10

    // Copying the concatenated string (str1) to a new string (str3)
    char str3[20];             // Declare an empty string (str3)
    strcpy(str3, str1);        // str3 becomes a copy of str1, which is "HelloWorld"
    printf("Copied string: %s\n", str3);  // Output: HelloWorld

    return 0;
}
