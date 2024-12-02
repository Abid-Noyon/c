#include <stdio.h>

int main()
{
    int i = 0;
again:
    printf("%d ", i);
    i++;

    while (i < 11)
    {
        goto again;
    }
    return 0;
}