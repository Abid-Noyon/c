#include <stdio.h>

int main(void)
{
    int i;
    for (i = 2; i < 101; i++)
    {
        // printf("%10d %10d %10d\n", i, i * i, i * i * i); // right justify
        printf("%-10d %-10d %-10d\n", i, i * i, i * i * i); // left justify
    }

    return 0;
}