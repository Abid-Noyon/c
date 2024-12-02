#include <stdio.h>

int main(void)
{
    int i, j;
    char op;
    printf("Enter operation: ");
    // scanf("%d%c%d", &i, &op, &j); // to give a space between number and operator you can use space before or after formate specifier like below
    scanf("%d %c %d", &i, &op, &j);
    switch (op)
    {
    case '+':
        printf("%d", i + j);
        break;
    case '-':
        printf("%d", i - j);
        break;
    case '*':
        printf("%d", i * j);
        break;
    case '/':
        printf("%d", i / j);
        break;

    default:
        printf("wrong input.");
        break;
    }
    return 0;
}