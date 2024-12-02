#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    while (i <= 10)
    {
        printf("+%d", i);
        sum += i;
        i++;
    }
    printf("=%d", sum);

    return 0;
}