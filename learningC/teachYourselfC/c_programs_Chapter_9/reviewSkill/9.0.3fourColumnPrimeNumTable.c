// let me find out more effective way
#include <stdio.h>

int main(void)
{
    int i, j, k = 0, prime;
    for (i = 2; i < 1000; i++)
    {
        prime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (!(i % j))
            {
                prime = 0;
            }
        }
        if (prime)
        {
            printf("%-8d ", i);
            ++k;
            if (k % 4 == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}