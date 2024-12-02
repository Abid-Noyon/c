#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a hexadecimal number: ");
    scanf("%X", &i);
    printf("Decimal: %d\nOctal:%o", i, i);
    return 0;
}