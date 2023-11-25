#include <stdio.h>

int main()
{
    int a;
    // b=a; this is invalid
    // you can say this
    int b = a;
    int p = 3 ^ 3; // this is valid but will not print 9 this is xor operator
    // char dt = '25 Nov'; not valid char can store one character.
    // operator presidence
    int x = 2, y = 3, z = 3, r = 1;
    int result = 3 * x / y - z + r;
    printf("Result is %d", result);
    return 0;
}