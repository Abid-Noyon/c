// -------------------------------------------------------------------
/* // printing string by printf

#include <stdio.h>

int main()
{
    printf("My favorite %s is %d", "number", 888);
    return 0;
} */

// -------------------------------------------------------------------

/* // series operation
// sum of the series 1^1+2^2+3^3+...+n^n
#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, sum = 0;
    printf("Enter value of N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        sum = sum + pow(i, i);
    }
    printf("The sum is: %d", sum);
    return 0;
} */

// -------------------------------------------------------------------

// 0_12_51_Drawing_a_Shape