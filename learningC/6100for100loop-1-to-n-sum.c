#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a postive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) //++i means i+1, i+=2 means i+2
    {
        sum += i;
    }
    printf("Sum = %d", sum);

    return 0;
}