#include <stdio.h>
#include <string.h>

int main()
{
    char s[80];
    do
    {
        printf("\nEnter string: ");
        gets(s);
    } while (strcmp(s, "quit"));

    return 0;
}
//_reads_string_until_enters_quit