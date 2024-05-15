#include <stdio.h>

int main()
{
    printf("%d\n", 0 && 1 || 1); // and operator precedented by or
    printf("%d\n", 0 && (1 || 1));
    return 0;
}