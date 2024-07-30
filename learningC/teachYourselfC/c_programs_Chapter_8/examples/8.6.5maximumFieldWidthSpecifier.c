#include <stdio.h>

int main(void)
{
    int i, j;
    printf("Enter an integer: ");
    scanf("%3d%d", &i, &j); // i's maximum field width is 3 characters
    printf("%d %d", i, j);
    return 0;
}