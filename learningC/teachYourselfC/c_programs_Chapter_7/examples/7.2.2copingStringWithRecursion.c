#include <stdio.h>

void rcopy(char *s1, char *s2);

int main(void)
{
    char str[80];
    rcopy(str, "this is a test");
    printf(str);
    return 0;
}

void rcopy(char *s1, char *s2)
{
    if (*s2)
    {
        *s1++ = *s2++;
        rcopy(s1, s2); // before we used while loop now recursion: it takes more time than loops
    }
    else
        *s1 = '\0';
}