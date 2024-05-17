#include <stdio.h>

int main()
{
    char ch;

    for (ch = getchar(); ch != 'q'; ch = getchar())
        ;
    printf("Found the q.");
    return 0;
}
//_runs_the_loop_until_get_desired_value
// 3.3.4_infinite_loop.c