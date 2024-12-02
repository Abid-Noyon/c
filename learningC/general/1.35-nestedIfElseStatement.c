// #include <stdio.h>
// int main()
// {
//     char gender, M, F;
//     float balance, bonous, netBalance;
//     printf("Enter your gender(M/F): ");
//     scanf("%c", &gender);
//     printf("Enter you balance: ");
//     scanf("%f", &balance);
//     if (gender == 'F')
//     {
//         if (balance > 5000)
//         {
//             bonous = .05 * balance;
//         }
//         else
//             bonous = .02 * balance;
//     }
//     else
//     {
//         bonous = .02 * balance;
//     }
//     netBalance = balance + bonous;
//     printf("Your balance is: %0.2f", netBalance);
//     return 0;
// }

// largest among three number

// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter three integer number: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > b)
//     {
//         if (a > c)
//             printf("%d is the largest.", a);
//         else
//             printf("%d is the largest.", c);
//     }
//     else if (b > c)
//     {
//         printf("%d is the largest.", b);
//     }
//     else
//         printf("%d is the largest.", c);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three integer number: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest.", a);
        }
        else
            printf("%d is the largest.", c);
    }
    else
    {
        if (b > c)
        {
            printf("%d is the largest.", b);
        }
        else
            printf("%d is the largest.", c);
    }
    return 0;
}