#include <stdio.h>

float getnum(void) // here function declared and defined at the same time
{
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    return x;
}

int main()
{
    float i;
    i = getnum();
    printf("%f", i);
    return 0;
}