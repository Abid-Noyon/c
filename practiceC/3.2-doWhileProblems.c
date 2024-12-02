#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    do
    {
        sum += i;
        i++;

    } while (i <= 10);

    printf("sum of 1-10: %d", sum);
    return 0;
}