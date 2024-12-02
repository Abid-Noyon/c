#include <stdio.h>

int main()
{
    char ch;
    printf("Enter text(Press 'Enter' to quit): ");

    do
    {

        printf("%c", ch);
        ch = getchar();
    } while (ch != '\r' && ch != '\n');
    if (ch == '\r' || ch == '\n')
    {
        printf(" <--Entered by you.");
    }

    return 0;
}

// 4.0.4_displaying_menu.c