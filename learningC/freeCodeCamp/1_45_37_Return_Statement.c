/* #include <stdio.h>
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
} */
// 1_53_21_If_Statements

// author: Abid Noyon
// this program will pass a value to a function called cube then the function will return the cube of the value
#include <stdio.h>

double cube(double num);

int main(void)
{
    printf("Find cube for 4 which is: %lf", cube(4.0));
    return 0;
}

double cube(double num)
{
    return num * num * num;
}