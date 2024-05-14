#include <stdio.h>
int main(void)
{
    float a, b, sum;
    printf("Enter two numbers:");
    scanf("%f", &a);
    scanf("%f", &b);

    sum = a + b;
    printf("Sum is %f", sum);
    return 0;
}

//_summing_float