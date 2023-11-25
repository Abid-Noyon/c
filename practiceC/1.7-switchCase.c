// // Program to create a simple calculator
// #include <stdio.h>

// int main() {
//     char operation;
//     double n1, n2;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operation);
//     printf("Enter two operands: ");
//     scanf("%lf %lf",&n1, &n2);

//     switch(operation)
//     {
//         case '+':
//             printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
//             break;

//         case '-':
//             printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
//             break;

//         case '*':
//             printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
//             break;

//         case '/':
//             printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
//             break;

//         // operator doesn't match any case constant +, -, *, /
//         default:
//             printf("Error! operator is not correct");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    char operation;
    double num1, num2;
    printf("Enter an operator(+,-): ");
    scanf("%c", &operation);
    printf("Now enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operation)
    {
    case '+':
        printf("%lf+%lf= %lf", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%lf-%lf= %lf", num1, num2, num1 - num2);
        break;

    default:
        printf("Error! operator is not correct");
        break;
    }
    return 0;
}