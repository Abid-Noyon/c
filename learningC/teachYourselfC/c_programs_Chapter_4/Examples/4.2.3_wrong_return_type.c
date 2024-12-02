#include <stdio.h>

int series(void); //_wrong_return_type
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", series());
    return 0;
}

int series(void)
{

    int total; // this will also work but for working correctly:  static int total = 0;

    total = (total + 2846) % 1422;

    return total;
}