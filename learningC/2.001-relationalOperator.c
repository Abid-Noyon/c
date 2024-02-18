// //this program checks if the entered number is negative or non-negative

// #include <stdio.h>

// int main(void)
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num<0)
//     {
//         printf("The number is negative.");
//     }
//     if(num>-1)
//     {
//         printf("The number is Non-negative.");
//     }
//     return 0;
// }

// ask user if the statement is correct then reply right

#include <stdio.h>

int main(void)
{
    int answer;
    printf("What is 14+14?");
    scanf("%d", &answer);
    if (answer == 28)
    {
        printf("Right!");
    }
    return 0;
}