// #include <stdio.h>
// int main()
// {
//     float mark;
//     printf("Enter your mark: ");
//     scanf("%f", &mark);
//     if (mark >= 80)
//     {
//         printf("Your mark is Excellent.");
//     }
//     else if (mark >= 60 && mark <= 79)
//     {
//         printf("Your mark is very good.");
//     }
//     else if (mark >= 40 && mark <= 59)
//     {
//         printf("Your mark is Good.");
//     }
//     else if (mark >= 33 && mark <= 39)
//     {
//         printf("Your mark is bad.");
//     }
//     else
//     printf("Your mark is very bad");
//     return 0;
// }

#include <stdio.h>

int main()
{
    char operation;
    float num1, num2;
    printf("Type your expression like(x+y): ");
    scanf("%f %c %f", &num1, &operation, &num2);
    if (operation == '+')
    {
        printf("%0.2f+%0.2f=%0.2f", num1, num2, num1 + num2);
    }
    else if (operation == '-')
    {
        printf("%0.2f-%0.2f=%0.2f", num1, num2, num1 - num2);
    }
    else if (operation == '*')
    {
        printf("%0.2f*%0.2f=%0.2f", num1, num2, num1 * num2);
    }
    else if (operation == '/')
    {
        if (num2 == 0)
        {
            printf("Division by is undefined.");
        }
        else
            printf("%0.2f/%0.2f=%0.2f", num1, num2, num1 / num2);
    }
    else
        printf("Unknown Operator.\n");

    return 0;
}