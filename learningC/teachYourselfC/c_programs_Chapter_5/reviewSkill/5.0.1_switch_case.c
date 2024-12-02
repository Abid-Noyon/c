#include <stdio.h>

int main()
{
    int a, i = 4;
    switch (i)
    {
    case 1:
        a = 1;
    case 2:
        a = 2;
        break;
    case 3:
        a = 3;
        break;
    case 4:
    case 5:
        a = 5;
        // default:
        //     break;
    }
    printf("a: %d", a);
    return 0;
}