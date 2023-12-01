#include <stdio.h>

int main()
{
    int i, n, prime = 1;
    printf("Enter any posive number: \n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is NOT a prime number.\n", n);
    }
    else
        printf("%d is a PRIME number.", n);
    return 0;
}