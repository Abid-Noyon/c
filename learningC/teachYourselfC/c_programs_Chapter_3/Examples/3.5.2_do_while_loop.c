#include <stdio.h>

int main()
{
    char ch;
    do
    {
        ch = getchar();
    } while (ch != 'q');
    printf("Found the q.");
    return 0;
}
//_do_while_loop
// 3.5.1_do_while_example.c