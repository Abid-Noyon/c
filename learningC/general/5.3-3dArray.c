#include <stdio.h>

int main()
{
    int multiDArray[2][2][2], i, j, k;
    printf("Enter values for 2 2x2 arrays: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                scanf("%d", &multiDArray[i][j][k]);
            }
        }
    }

    printf("Values of 2 2x2 arrays: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("\t%d", multiDArray[i][j][k]);
            }
            printf("\n");
        }
        printf("\nSecond array: \n");
    }

    return 0;
}