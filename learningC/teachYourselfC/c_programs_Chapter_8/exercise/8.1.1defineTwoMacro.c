#include <stdio.h>
#define COUNTBY 3
#define MAX 10

int main(void)
{
    for (int i = COUNTBY; i <= MAX - 1; i++)
    {
        printf("%d ", i);
    }

    return 0;
}