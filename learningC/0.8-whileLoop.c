#include <stdio.h>

int main()
{
    int number, i = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (i <= number)
    {
        printf("%d", i);
        i++;
    }

    return 0;
}