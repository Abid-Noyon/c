//_positive_negative_zero_with_if
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        if (num > 0)
        {
            printf("%d is positive.\n", num);
        }
        if (num == 0)
        {
            printf("%d is zero.\n", num);
        }
    }
    else
        printf("%d is negative.\n", num);

    return 0;
}

// 3.4.3_valid_for_loop.c