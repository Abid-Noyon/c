#include <stdio.h>

int main()
{

    int i;

    for (i = 0; i < 10;) // not declared incre/decre here
    {
        printf("%d", i);
        i++; // declared incre/decre here
    }
    return 0;
}
//_manual_increment_for_loop