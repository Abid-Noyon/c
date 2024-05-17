#include <stdio.h>

int main()
{
    float num1, num2;
    char ch;
    printf("Do you want to: \n");
    printf("Add, Subtract, Multiply or Divide? \n");
    // force user to enter a valid response
    do
    {
        printf("Enter first letter: ");
        ch = getchar();
    } while (ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D');
    printf("\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    if (ch == 'A')
    {
        printf("Additiohn: %.2f", num1 = num2);
    }
    else if (ch == 'S')
    {
        printf("Subtraction: %.2f", num1 - num2);
    }
    else if (ch == 'M')
    {
        printf("Multiplicaton: %.2f", num1 * num2);
    }
    else if (ch == 'D' && num2 != 0)
    {
        printf("Divide: %.2f", num1 / num2);
    }

    return 0;
}