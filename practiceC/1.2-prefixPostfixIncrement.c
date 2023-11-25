#include <stdio.h>

int main()
{
    int m = 5;
    printf("valume m is: %d\n", m);
    int y = m++; // y=m+1
    printf("Value of m and y: %d %d\n", m, y);

    int n = 5; // n = 6
    int x = ++n;
    printf("valume m is: %d", n);
    printf("\nValue of n and x: %d %d", n, x);
    return 0;
}