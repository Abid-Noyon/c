// C Program To demonstrate
// sizeof operator
#include <stdio.h>

int main()
{
    printf("%zu char\n", sizeof(char));
    printf("%zu int\n", sizeof(int));
    printf("%zu float\n", sizeof(float));
    printf("%lu double\n", sizeof(double));
    printf("%zu long double\n", sizeof(long double));
    printf("%lu unsigned int\n", sizeof(unsigned int));
    return 0;
}