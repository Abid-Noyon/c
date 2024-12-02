#include <stdio.h>

int main()
{
    int a = 10;
    double d = 10.10;
    char grade = 'A';

    printf("Number Address: %p\n Double: %p\n char: %p\n", &a, &d, &grade);
    return 0;
}

// 3_17_20_Pointers