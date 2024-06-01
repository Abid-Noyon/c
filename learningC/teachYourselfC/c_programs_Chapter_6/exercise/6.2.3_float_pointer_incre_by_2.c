#include <stdio.h>

int main()
{
    float *fp, f;
    fp = &f;
    printf("%p  ", fp);
    fp = fp + 1;
    printf("\n%p", fp);
    return 0;
}