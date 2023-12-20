// #include <stdio.h>

// // Function to calculate Fibonacci numbers
// int fibonacci(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main()
// {
//     int n;

//     // Input the number of terms
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     // Displaying Fibonacci series
//     printf("Fibonacci Series:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", fibonacci(i));
//     }
//     return 0;
// }

#include <stdio.h>
int fibonacci(int);
int main(void)
{
    int terms;
    printf("Enter terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Series below:\n");
    for (int n = 0; n < terms; n++)
    {
        printf("%d ", fibonacci(n));
    }
    return 0;
}

int fibonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}