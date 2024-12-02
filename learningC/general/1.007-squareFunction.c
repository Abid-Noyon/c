#include <stdio.h>

int getSqr(void);

int main(void)
{
    int sqr;
    sqr = getSqr();
    printf("The square is: %d", sqr);
    // printf("The square is: %d", getSqr()); or simply call the function here.
    return 0;
}

int getSqr(void)
{
    int num;
    printf("Enter a number to square it: ");
    scanf("%d", &num);
    return num * num;
}