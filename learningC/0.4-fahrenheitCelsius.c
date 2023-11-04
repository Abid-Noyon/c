#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &f);
    c = ((f - 32) / 9) * 5;
    printf("Celsius temperature: %f\n", c);
    return 0;
}