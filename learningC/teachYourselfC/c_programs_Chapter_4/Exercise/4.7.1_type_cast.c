#include <stdio.h>

int main()
{
    float f = 1.00;
    for ((int)f; (int)f < 11; (int)f++)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}