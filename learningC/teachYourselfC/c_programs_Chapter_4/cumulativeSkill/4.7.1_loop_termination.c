#include <stdio.h>

int main()
{
    int i;
    for ( i = 0; i < 33000; i++) // will this loop ever terminate
    {
        printf("%d ", i);
    }
    
    return 0;
}