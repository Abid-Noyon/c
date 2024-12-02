#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;
    // relational operators
    printf("i>j %d\n", i > j);
    printf("i>=j %d\n", i >= j);
    printf("i==j %d\n", i == j);
    printf("i<j %d\n", i < j);
    printf("i<=j %d\n", i <= j);

    // logical operators
    printf("i && j %d\n", i && j);
    printf("i || j %d\n", i || j);
    printf("!i, !j %d\n", !i, !j);
    return 0;
}