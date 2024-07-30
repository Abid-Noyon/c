#include <stdio.h>

/**
 * This program demonstrates the use of pointer increment and its effect on variables.
 * It declares an integer pointer 'p' and an integer 'q'.
 * The pointer 'p' is assigned the address of 'q'.
 * The value of 'q' is set to 1.
 * The program then prints the value of 'p' and 'q'.
 * 
 * Uncommenting the line '(*p)++' will increment the value of 'q' and keep 'p' unchanged.
 * Uncommenting the line '*p++' will increment the pointer 'p' and keep 'q' unchanged.
 * 
 * Finally, the program prints the updated value of 'q' and the new value of 'p'.
 */

int main()
{
    int *p, q;
    p = &q;
    q = 1;
    printf("%p  ", p);

    (*p)++; // now q is incremented and p is unchanged
    *p++;   // now p is incremented and q is unchanged
    printf(" %d %p", q, p);

    return 0;
}