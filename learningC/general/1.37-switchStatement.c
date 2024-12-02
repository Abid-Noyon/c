#include <stdio.h>

int main()
{
    int mark, index;
    printf("Enter your mark: ");
    scanf("%d", &mark);
    index = mark / 10;
    switch (index)
    {
    case 10:
    case 9:
    case 8:
        printf("Excellent");
        break;
    case 7:
    case 6:
        printf("Very good.");
        break;
    case 5:
    case 4:
        printf("Good");
        break;

    case 3: 
    printf("c");
    break;
    default:
        printf("fail");
        break;
    }
    return 0;
}

// calculator by swith case

/* #include <stdio.h>

int main()
{
    float num1, num2;
    char operation;
    printf("Enter your expression like(x+y): ");
    scanf("%f %c %f", &num1, &operation, &num2);
    switch (operation)
    {
    case '+':
        printf("%f+%f=%f", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%f-%f=%f", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%f*%f=%f", num1, num2, num1 * num2);
        break;

    case '/':
        if (num2 == 0)
        {
            printf("Division by zero is undefined.");
        }
        else
            printf("%f/%f=%f", num1, num2, num1 / num2);
        break;

    default:
        printf("Unknown operator.");
        break;
    }
    return 0;
} */