#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int fact = 1;
    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exost");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d=%d", n, fact);
    }

    return 0;
}