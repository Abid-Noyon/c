#include <stdio.h>

// Function prototype
void myputs(char *p);

int main()
{
    // Call the myputs function with the string "this is a test"
    myputs("this is a test");
    return 0;
}

// Function definition for myputs
void myputs(char *p)
{
    // Loop through the string until the null character is encountered
    while (*p)
    {
        // Print each character
        printf("%c", *p);
        p++;
    }
    printf("\n"); // Print a newline character at the end
}