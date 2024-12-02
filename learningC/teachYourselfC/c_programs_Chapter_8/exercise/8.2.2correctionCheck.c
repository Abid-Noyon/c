/* #include <stdio.h>

int main(void)
{
    char str[80]="this is a test";
    putchar(*str); // this can print only one char and as str is a string then we have to pass it as like pointer address value putting a * at front
    return 0;
} */

// lets try to show all char
#include <stdio.h>

int main(void)
{
    char str[80] = "this is a test";
    for (int i = 0; i <= str[i]; i++) // this should not be used bacause we can solve it more efficiently with puts or  printf() as it is a string array
    {
        putchar(str[i]);
    }

    return 0;
}