#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;
    do
    {
        cprintf(".\n\r");
        if (kbhit())
            break;
    } while (1);

    return 0;
}