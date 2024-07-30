#include <stdio.h>

int mystrlen(char *string);

int main(void)
{
    char str[] = "This is Abid";
    mystrlen(str);
    return 0;
}
int mystrlen(char *string)
{
    int i = 0;
    while (*string)
    {
        string++;
        ++i;
    }

printf("String length: %d", i);
    return 0;
}
