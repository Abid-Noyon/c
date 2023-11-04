#include <stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter a postive integer: ");
    scanf("%d", &n);

    do
    {
        i++;
        sum+=i*i;
        
    } while (i<=n);
    printf("Sum = %d", sum);

    return 0;
}