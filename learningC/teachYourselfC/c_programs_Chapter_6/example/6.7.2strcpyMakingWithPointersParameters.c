#include <stdio.h>

// Function to copy a string from 'from' to 'to'
void mystrcpy(char *to, char *from);

int main()
{
    char str[80];
    mystrcpy(str, "This is a test."); // Copy the string "This is a test." to 'str'
    printf(str); // Print the copied string
    return 0;
}

// Implementation of the mystrcpy function
void mystrcpy(char *to, char *from)
{
    while (*from) // Loop until the end of the 'from' string
        *to++ = *from++; // Copy each character from 'from' to 'to'
    *to = '\0'; // Add null character at the end of the copied string
}

// Practice 1
// making strcpy to mystrcpy

/* #include <stdio.h>

void myStrcpy(char *to, char *from);

int main(void)
{
    char str[90];
    myStrcpy(str, "This text will be copied on str string.");
    printf(str);
    return 0;
}
void myStrcpy(char *to, char *from)
{
    while (*from)
        *to++ = *from++;
    *to = '\0';
} */

// practice 2
// making strcpy to mystrcpy
/* #include <stdio.h>

void mystrcpy(char *to, char *from);

int main(void)
{
    char sentence[255];
    mystrcpy(sentence, "I am Abid.");
    printf(sentence);
    return 0;
}
void mystrcpy(char *to, char *from)
{
    while(*from)
    {
        *to++=*from++;
    }
    *to='\0';
} */