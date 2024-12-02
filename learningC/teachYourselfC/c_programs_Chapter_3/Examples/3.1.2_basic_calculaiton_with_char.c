#include <stdio.h>

int main(void)
{
    float num1, num2;
    char op;
    printf("Enter first letter of your operation. In block.\nAdd, Substract, Multiplication, Devide: ");
    op = getchar();
    printf("\nEnter first number: ");
    scanf("%f", &num1);
    printf("\nEnter second number: ");
    scanf("%f", &num2);
    if (op == 'A')
    {
        printf("%.2f", num1 + num2);
    }
    if (op == 'S')
    {
        printf("%.2f", num1 - num2);
    }
    if (op == 'M')
    {
        printf("%.2f", num1 * num2);
    }
    if ((op == 'D') && num2 != 0)
    {
        printf("%.2f", num1 / num2);
    }
    if (num2 == 0)
    {
        printf("cant devide by zero.");
    }

    return 0;
}
//_basic_calculaiton_with_char