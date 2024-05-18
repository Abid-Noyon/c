#include <stdio.h>
int main()
{
    float a, b;
    char ch;

    printf("Do you want to: \n");
    printf("Add, Subtract, Multiply, Divide?\n");

    do
    {
        printf("Enter first letter: ");
        ch = getchar();
    } while (ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D');
    printf("\n");

    printf("Enter first number:");
    scanf("%f", &a);
    printf("Enter second number:");
    scanf("%f", &b);

    switch (ch)
    {
    case 'A':
        printf("%.2f", a + b);
        break;
    case 'S':
        printf("%.2f", a - b);
        break;
    case 'M':
        printf("%.2f", a * b);
        break;
    case 'D':
        if (b != 0)
            printf("%.2f", a / b);
        break;
    }

    return 0;
}
// printf(_switch_Add_Subtract_Multiply_Divide?\n");
// 3.9.0_switch_statement.c