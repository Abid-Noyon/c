#include <stdio.h>

// int a = 1, b = 1, c = a; cant be declared, no depandant variable in global

int main()
{
    int a = 1, b = 1, c = a; // can be
    printf("%d %d %d", a, b, c);

    return 0;
}