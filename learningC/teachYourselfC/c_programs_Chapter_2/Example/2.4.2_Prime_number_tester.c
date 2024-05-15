/*_Prime_number_tester .... */
/* #include <stdio.h>
int main(void)
{
    int num, i, is_prime;
    printf("Enter the number to test: ");
    scanf("%d", &num);
    // now test for factors
    is_prime = 1;
    for (i = 2; i <= num / 2; i = i + 1)
        if (num % i == 0)
            is_prime = 0;
    if (is_prime == 1)
        printf("The number is prime.");
    else
        printf("The number is not prime.");
    return 0;
} */

// _______________________________________
#include <stdio.h>

int main()
{
    int num, i, isPrime;
    printf("Enter the number: ");
    scanf("%d", &num);
    isPrime = 1;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is Not a prime number.\n", num);
    }

    return 0;
}

// for (i = 2; i <= num / 2; i++): This for loop iterates through potential divisors of num, starting from 2 (the smallest prime number) and going up to half of num (because any divisor greater than half would have a corresponding divisor less than half).