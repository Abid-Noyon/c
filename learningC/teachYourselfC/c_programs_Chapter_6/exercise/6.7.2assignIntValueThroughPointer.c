#include <stdio.h>

// Function prototype
void f(int *p);

int main()
{
    int i;
    f(&i); // Call the function f and pass the address of i
    printf("%d", i); // Print the value of i

    return 0;
}

// Function definition
void f(int *p)
{
    *p = -1; // Assign -1 to the value pointed by p
}