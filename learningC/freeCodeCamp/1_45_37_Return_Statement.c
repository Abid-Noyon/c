#include <stdio.h>
#include <stdlib.h>

double cube(double num);

int main()
{
    printf("The answer: %lf", cube(4.0));
    return 0;
}

double cube(double num)
{
    // double result = num * num * num;
    // this line also can be written as
    return num * num * num; // return breaks the function and returns with the value you specified
}
// 1_53_21_If_Statements