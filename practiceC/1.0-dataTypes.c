#include <stdio.h>
#include <float.h>

int main()
{
    printf("storage size of float: %d\n", sizeof(float));
    printf("Minimum positive value of float: %E\n", FLT_MIN);
    printf("Maximum positive value of float: %E\n", FLT_MAX);
    printf("Precsion value of float: %d\n", FLT_DIG);
    return 0;
}
