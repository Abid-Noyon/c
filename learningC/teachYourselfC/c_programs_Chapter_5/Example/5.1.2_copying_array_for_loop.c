#include <stdio.h>

int main(void)
{
    int a1[10], a2[10];
    int i;

    for (i = 1; i < 11; i++)
        a1[i - 1] = i; // storing values 1-10

    for (i = 0; i < 10; i++)
        a2[i] = a1[i]; // copying values

    for (i = 0; i < 10; i++)
        printf(" %d\n", a2[i]);

    return 0;
}

//_copying_array_for_loop
