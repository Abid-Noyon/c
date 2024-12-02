#include <stdio.h>
int *init(int x);
int count;

int main (void)
{
    int *p;
    p=init(110); //assigns count address to p pointer address
    printf("Count is %d",*p); //prints the value of p pointer
    return 0;
}

int *init(int x)
{
    count =x;
    return &count; // returns the address of the int type count global var
}