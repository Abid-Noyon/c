/* #include <stdio.h>

int main()
{
    int i;

    for (i = 100; i > 0; i--)
        printf(" %d\t", i);

    return 0;
} */
// version 2

#include <stdio.h>

int main()
{
    int i = 100;

    for (i; i > 0; i--)
        printf(" %d\t", i);

    return 0;
}
//_variable_with_initialization