#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    do
    {
        ch = getch();
        cprintf("%c", toupper(ch));

    } while (ch != 'q');
    return 0;
}