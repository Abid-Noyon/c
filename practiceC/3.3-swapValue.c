#include <stdio.h>

int main()
{
    int a, b;
    a = 43;
    b = 1337;
    printf("a=%d\t and b=%d\n", a, b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d\t and b=%d\n", a, b);
    return 0;
}