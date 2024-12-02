#include <stdio.h>

int main(void)
{
    float f;
    f = 10 / 3; // type of the right converted to left and as float is greater than int thus only int part of the division will be stored in float
    printf("%f", f);
    return 0;
}