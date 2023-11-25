// factorial of an integer number
#include <stdio.h>

int main()
{
    int number, i;
    long factorial = 1;

    printf("Enter an integer number: \n");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d = %ld\n", number, factorial);
    return 0;
}