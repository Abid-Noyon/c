// #include <stdio.h>

// int main(void)
// {
//     int answer;
//     printf("(12+24)=? Enter your answer: ");
//     scanf("%d", &answer);
//     if(answer==36)
//     {
//         printf("Yeah, right!");
//     }
//     else
//     {
//         printf("No! The right anser is 36. Thank you.");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int x, y;
    char op;
    printf("Enter operator (+, -): ");
    scanf("%c", &op);
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);
    if(op=='+')
    {
        printf("Sum: %d", x+y);
    }
    else
    {
        printf("Substract: %d", x-y);
    }
    return 0;
}