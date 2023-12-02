// #include <stdio.h>

// int main()
// {
//     int number = 10, prime = 1;
//     for (int i = 2; i < number; i++)
//     {
//         if (number % i == 0)
//         {
//             prime = 0;
//             break;
//         }
//     }
//     if (prime == 0)
//     {
//         printf(" not prime number.");
//     }

//     else
//         printf("prime number.");
//     return 0;
// }

#include <stdio.h>

int main()
{
    int number, prime = 1;
    printf("Enter a positive interger: \n");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is NOT a prime number.", number);
    }
    else
        printf("%d is a PRIME number.", number);

    return 0;
}