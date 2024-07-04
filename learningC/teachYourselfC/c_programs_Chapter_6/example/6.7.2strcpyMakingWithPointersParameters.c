/* #include <Stdio.h>

void mystrcpy(char *to, char *from);

int main()
{
    char str[80];
    mystrcpy(str, "This is a test.");
    printf(str);
    return 0;
}

void mystrcpy(char *to, char *from)
{
    while (*from)
        *to++ = *from++;
    *to = '\0';
} */

// Practice 1
// making strcpy to mystrcpy

#include <stdio.h>

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
}