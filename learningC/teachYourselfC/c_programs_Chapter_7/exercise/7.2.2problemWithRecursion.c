#include <stdio.h>
void f(void) // i think the problem is here
{
    int i;
    printf("in f() \n"); //as theres no condition the printf() works infinitely
    for(i=0; i<10; i++)
    f();
}

int main(void)
{
    f();
    return 0;
}