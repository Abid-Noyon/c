#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str[80];
    gets(str);

    j = strlen(str);

    for (i = 0; i < j / 2; i++)
    {
        printf("%c%c", str[i], str[j - i - 1]);
    }

    return 0;
}
//_encode_string_start_and_end