#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;
    cprintf("Enter any key to get ASCI value. Press tab to stop\n\r");
    do
    {
        ch = getch();
        cprintf("%d\n\r", ch);
    } while (ch != '\t');

    return 0;
}