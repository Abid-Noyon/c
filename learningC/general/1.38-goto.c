#include <stdio.h>

int main()
{
    int a = 10;
LOOP:
    do
    {
        if (a == 14)
        {
            a = a + 1;
            goto LOOP;
        }
        printf("the value of a: %d\n", a);
        a++;
    } while (a < 20);
    return 0;
}