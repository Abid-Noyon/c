#include <stdio.h>
#define DEBUG 2

int main()
{
#ifndef DEBUG
    printf("Program is not Debugging\n");
#else

#ifdef DEBUG == 1
    printf("Program is Debugging\n");

#elif DEBUG == 2
    printf("loading for debugging\n");
#else
    printf("Unknown");
#endif
#endif

    printf("Hello World...!");

    return 0;
}
