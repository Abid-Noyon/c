// C Program To demonstrate
// sizeof operator
#include <stdio.h>

int main()
{
    printf("%zu\n char", sizeof(char));
    printf("%zu\n int", sizeof(int));
    printf("%zu\n float", sizeof(float));
    printf("%lu\n double", sizeof(double));
    printf("%zu\nlong double", sizeof(long double));
    printf("%lu\n unsigned int", sizeof(unsigned int));
    return 0;
}