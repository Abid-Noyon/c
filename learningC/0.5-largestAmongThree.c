#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest;

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    printf("%d is the largest\n", largest);

    if (largest == a)
    {
        printf("Descending order: %d %d %d\n", a, (b > c ? b : c), (b > c ? c : b));
    }
    else if (largest == b)
    {
        printf("Descending order: %d %d %d\n", b, (a > c ? a : c), (a > c ? c : a));
    }
    else
    {
        printf("Descending order: %d %d %d\n", c, (a > b ? a : b), (a > b ? b : a));
    }

    return 0;
}