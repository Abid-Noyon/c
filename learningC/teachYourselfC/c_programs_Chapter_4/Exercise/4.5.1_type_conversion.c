#include <stdio.h>

int main()
{
    char ch = 'A';
    short i = 1;
    unsigned long ul = 1;
    float f = 20.0f;
    // what will be the overall type o f this expression
    // f/ch - (i*ul)
    printf("Overall type of f/ch - (i*ul) is: %f", f / ch - (i * ul)); // will be promoted to float
    return 0;
}