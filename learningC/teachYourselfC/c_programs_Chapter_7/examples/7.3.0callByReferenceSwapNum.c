#include <stdio.h>
void swapNum(int *num1, int *num2);

int main(void)
{
    int a = 1, b = 2;
    printf("a: %d\tb: %d\n", a, b);
    swapNum(&a, &b);
    printf("a: %d\tb: %d\n", a, b);
    return 0;
}
void swapNum(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}