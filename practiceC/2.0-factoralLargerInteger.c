#include <stdio.h>
#include <gmp.h>

void calculateFactorial(int n)
{
    mpz_t result;
    mpz_init(result); // Initialize result variable

    // Set result to 1
    mpz_set_ui(result, 1);

    // Calculate factorial
    for (int i = 1; i <= n; ++i)
    {
        mpz_mul_ui(result, result, i);
    }

    // Print the result
    gmp_printf("Factorial of %d is:\n%Zd\n", n, result);

    // Free the memory used by the result variable
    mpz_clear(result);
}

int main()
{
    int number;

    // Input: Get the number from the user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    // Check for negative input
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        calculateFactorial(number);
    }

    return 0;
}
