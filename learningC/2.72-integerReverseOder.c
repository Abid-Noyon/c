#include <stdio.h>
int main()
{
    int n, t, sum = 0, remainder;
    printf("Enter integer\n");
    scanf("%d", &n);
    t = n;
    while (t != 0)
    {
        remainder = t % 10;
        sum = sum + remainder;
        printf("%d", remainder);
        t = t / 10;
    }
    printf("\nSum of digits of %d=%d\n", n, sum);
    return 0;
}