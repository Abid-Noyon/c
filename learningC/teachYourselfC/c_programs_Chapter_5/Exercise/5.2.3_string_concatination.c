/* #include <stdio.h>
#include <string.h>

int main()
{
    char s[50], bigstr[5000];
    int i;

    for (;;)
    {
        gets(s);
        if (strcmp(s, "quit") == 0)
            break;
        if (strlen(s) + strlen(bigstr) > 5000)
            break;
        strcat(bigstr, s);
        strcat(bigstr, "\n");
    }

    printf("\n%s", bigstr);

    return 0;
} */

// version 2
#include <stdio.h>
#include <string.h>

int main()
{
    char s[50], bigstr[5000];
    int i;
    printf("Enter a bunch of string one after one pressing enter key: ");

    for (;;)
    {
        gets(s);
        if (!strcmp(s, "quit"))
            break;
        if (strlen(s) + strlen(bigstr) > 5000)
            break;
        strcat(bigstr, s);
        strcat(bigstr, "\n");
    }

    printf("\nThe whole string: %s", bigstr);

    return 0;
}
//_string_concatination