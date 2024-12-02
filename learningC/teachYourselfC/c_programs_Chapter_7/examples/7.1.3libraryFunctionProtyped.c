#include <stdio.h>
// #include <math.h>

int main(void)
{
    double answer;

    answer = sqrt(10); // how this sqrt knows the function protype is double as it not configured by us, the answer is it is prototyped in the math.h header file so lets see without the header file how it does

    printf("%f", answer);

    return 0;
}