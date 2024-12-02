#include <stdio.h>

int o_to_c(int x);

int main()
{
    int ounce, cup;
    printf("Enter the value of ounce:");
    scanf("%d", &ounce);
    cup = o_to_c(ounce);
    printf("The conversion in cups:%d", cup);
}

int o_to_c(int x)
{
    return 8 * x;
}
//_ounce_to_cup