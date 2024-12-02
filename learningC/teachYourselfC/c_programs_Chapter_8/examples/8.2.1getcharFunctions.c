#include <stdio.h>
// #include <conio.h>

int main(void)
{
    char ch;
    do
    {
        ch = getchar();
        putchar('.'); // i dont know why this is not working like line buffered as stated on the book I will find out later
    } while (ch != '\n');

    return 0;
}