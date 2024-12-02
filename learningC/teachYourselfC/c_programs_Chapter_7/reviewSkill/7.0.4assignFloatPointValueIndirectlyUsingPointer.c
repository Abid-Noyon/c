#include <stdio.h>

int main(void)
{
    float f, *fp;
    fp = &f;
    *fp = 1.00;
    printf("%f", f);
    return 0;
}