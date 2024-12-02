#include <stdio.h>

int main(void)
{
    int i;
    printf("%d %f\n%n", 100, 123.23, &i);
    printf("%d characters output so far", i); // didnot get the output like 15 character output so far | let me explore
    return 0;
}