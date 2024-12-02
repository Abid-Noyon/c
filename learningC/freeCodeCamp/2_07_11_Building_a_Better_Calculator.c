#include <stdio.h>

int main()
{
    double num1, num2;
    char op;
    printf("Enter num1: ");
    scanf("%lf", &num1);
    getchar();
    printf("Enter operator: ");
    scanf("%c", &op);
    printf("Enter num2: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("Sum: %lf\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("Subtruction: %lf\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("Multiplication: %lf\n", num1 * num2);
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("Divition by zero is not possible.\n");
        }
        else
            printf("Divition: %lf\n", num1 / num2);
    }
    else
    {
        printf("Invalid Operator");
    }
    return 0;
}

// 2_14_51_Switch_Statements