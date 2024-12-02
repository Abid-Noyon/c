// this program counts spaces of a string entered by the user with array

/* #include <stdio.h>

int main(void)
{
    char string[80];
    int i, spCount = 0;
    printf("Enter a string (max 80 character): ");
    gets(string);
    for (i = 0; i < string[i]; i++)
    {
        if (string[i] == ' ')
        {
            spCount++;
        }
    }

    printf("Number of spaces: %d", spCount);

    return 0;
} */

// this program counts spaces of a string entered by the user with pointer arithmetic

/* #include <stdio.h>
#include <string.h>

int main(void)
{
    char string[90], *sp;
    sp = string;
    printf("Enter an string(max 90 character): ");
    gets(string);
    int i=1, spcount = 0;

    while (i<=strlen(string))
    {
        if (*sp == ' ')
        {
            spcount++;
        }
        sp++;
        i++;
    }

    printf("Total spaces: %d", spcount);
    return 0;
}
 */