#include <stdio.h>

int main(void)
{
    int count[100][10];
    count[44][8] = 99;
    count[44][9] = 100;
    int *cp;
    // cp = count; //this will work but to avoid warning like assinment from incompitable pointer use below line
    cp = (int *)count;
    printf("Value: %d\n", count[44][8]);
    printf("Value: %d\n", *(cp + 44 * 10 + 8));
    printf("Value: %d\n", *(cp + 44 * 10 + 9));

    return 0;
}