#include <stdio.h>

int main(void)
{
    int i, j;
    printf("Enter a decimal: ");
    scanf("%d.%d", &i, &j);
    printf("left part: %d, right part: %d", i, j);
    return 0;
}