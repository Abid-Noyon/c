#include <stdio.h>

int main()
{
    int sqr[10], i;
    for (int i = 1; i < 11; i++)
    {
        sqr[i - 1] = i * i; // as per array indexes start with 0
    }
    for (i = 0; i < 10; i++)
    {
        printf("Square of %d is: %d\n", i + 1, sqr[i]);
    }

    return 0;
}

// we cant asign two array jsut by = asignment operator
// just like this

/* char a[10], a2[10];
a = a2; // this is wrong */

// For this we have to copy each element separately.