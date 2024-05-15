/* #include <stdio.h>

int main()
{
    int i, j;
    i =10;
    j = i++; // assigns the current value of i to j which is 10
    printf("i and j: %d %d", i, j);
    printf("i and j: %d %d", i, j);
    return 0;
} */

// now lets see what happpen in case of ++i
//  ------------------------------
#include <stdio.h>

int main()
{
    int i, j;
    i = 10;
    j = ++i; // assigns the current value of i to j which is 10
    printf("i and j: %d %d", i, j);
    // printf("i and j: %d %d", i, j);
    return 0;
}