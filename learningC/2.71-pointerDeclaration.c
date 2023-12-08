#include <stdio.h>

int main()
{
    // declaration = instruction manual
    int n;
    int *pn; 
    int **ppn;
    int ***pppn;

    n = 42;
    pn = &n;
    ppn = &pn;
    pppn = &ppn;

    printf("%d\n", ***pppn); 
    return 0;
}