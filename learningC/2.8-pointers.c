#include <stdio.h>

int main()
{
    int *pc, c;
    c = 7;
    pc = &c;

    printf("%p\n", pc);
    return 0;
}