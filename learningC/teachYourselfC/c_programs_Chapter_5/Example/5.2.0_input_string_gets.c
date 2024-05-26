/* #include <stdio.h>

int main()
{
    char str[80];
    int i;
    printf("Enter a string less than 80 char: ");
    gets(str);
    for (i = 0; str[i]; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
 */

// version 2
#include <stdio.h>

int main()
{
    char str[80];
    int i;
    printf("Enter a string less than 80 char: ");
    gets(str);
    //printf(str); // otuput str
    printf("%s\n", str);

    return 0;
}
