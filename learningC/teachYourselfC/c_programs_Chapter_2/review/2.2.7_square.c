#include <stdio.h>
int sqrIt(float num);
int main()
{
    float sqNum;
    printf("Enter number to squre: ");
    scanf("%f", &sqNum);
    sqrIt(sqNum);
    return 0;
}
int sqrIt(float num)
{
    printf("Square is: %.2f", num * num);
}