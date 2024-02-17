#include <stdio.h>

int main(void)
{
    int num;
    float f;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter a float number: ");
    scanf("%f", &f);

    printf("Integer: %d\n", num);
    printf("float: %f", f);
    return 0;
}