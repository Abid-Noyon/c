// writing a program to convert a_string_to_uppercase_and_lowercase_using_pointers professionally
#include <stdio.h> // Include standard input and output library for printf
#include <ctype.h> // Include character type library for toupper and tolower functions

int main() // Main function where the program starts executing
{
    char str[80], *p; // Declare a character array 'str' of size 80 and a character pointer 'p'
    int i; // Declare an integer 'i' (unused in this snippet)

    printf("Enter a string:"); // Prompt the user to enter a string
    gets(str); // Read a line from stdin and store it into the string 'str'. Warning: gets() is unsafe.

    p = str; // Initialize pointer 'p' to point to the first character of 'str'
    while (*p) // Loop until the null character '\0' is encountered
    {
        *p = toupper(*p); // Convert the character pointed by 'p' to uppercase
        p++; // Move the pointer to the next character
    }
    printf("%s\n", str); // Print the modified string in uppercase

    p = str; // Re-initialize pointer 'p' to point again to the first character of 'str'
    while (*p) // Loop until the null character '\0' is encountered
    {
        *p = tolower(*p); // Convert the character pointed by 'p' to lowercase
        p++; // Move the pointer to the next character
    }
    printf("%s\n", str); // Print the modified string in lowercase

    return 0; // Return 0 to indicate successful completion
}


// practice 1

/* #include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[80], *p;
    int i;
    p = str;
    printf("Enter a string: ");
    gets(str);
    while (*p)
    {
        *p = toupper(*p);
        p++;
    }
    // this while loop can be even better with the following code
    // while(*p)
    // {
    //     *p++ = toupper(*p);
    // }
    printf("Upper case: %s\n", str); // upercase

    p = str; // reset the pointer

    while (*p)
    {
        *p = tolower(*p);
        p++;
    }
    printf("Lower case: %s\n", str); // lowercase
    return 0;
} */

//  this is not professional

/* #include <stdio.h>

int main(void)
{
    char str[80];
    int i;
    printf("Enter a string:");
    gets(str);
    for(i=0; str[i]; i++)
    {
        str[i]= toupper(str[i]);
    }
    printf("%s\n", str); // upercase

    for(i=0; str[i]; i++)
    {
        str[i]= tolower(str[i]);
    }
    printf("%s\n", str); // lowercase

    return 0;
} */