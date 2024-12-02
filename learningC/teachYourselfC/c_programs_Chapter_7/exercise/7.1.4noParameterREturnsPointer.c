#include <stdio.h>
double *Purge(void);
double d;

int main(void)
{
    printf("%p\n", Purge()); 
    printf("%p\n", &d); // does the same of previous line
    return 0;
}
double *Purge(void)
{
    return &d; // returns the address of d which is a global var
}