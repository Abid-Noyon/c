#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d number is greater and %d number is smaller", a, b);
    }
    else
    {
        printf("%d number is greater and %d number is smaller", b, a);
    }
}