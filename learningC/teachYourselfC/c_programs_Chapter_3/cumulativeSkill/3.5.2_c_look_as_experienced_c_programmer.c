#include <stdio.h>

int main(void)
{
    float numerator, denominator;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter first number: ");
        scanf("%f", &numerator);
        printf("Enter second number: ");
        scanf("%f", &denominator);
        if (!denominator)
        {
            printf("\nCant divide by zero.\n");
        }
        else
            printf("%.2f\n", numerator / denominator);
    }

    return 0;
}