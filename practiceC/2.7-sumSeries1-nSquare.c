// write a c program to calculate the sum of the following series 1^2+2^2+3^2+n^2
#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    sum = (n * (n + 1) * (2 * n + 1)) / 6;
    for (i = 1; i <= n; i++)
    {
        if (i != n)
        {
            printf("%d^2+", i);
        }
        else
            printf("%d^2", i);
    }
    printf("\nSum of the series = %0.2f", sum);
    return 0;
}