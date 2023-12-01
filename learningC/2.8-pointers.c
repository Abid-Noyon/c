#include <stdio.h>

int main()
{
    int *pc, c;
    c = 7;
    pc = &c;

    printf("%p\n", pc);  // 0000002420FFFE24
    printf("%d\n", pc);  // 0000000000000007
    printf("%d\n", *pc); // 7
    printf("%p\n", &c);  // 0000002420FFFE24
    return 0;
}