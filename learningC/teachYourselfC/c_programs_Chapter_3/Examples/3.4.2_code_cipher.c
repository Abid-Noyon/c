//_code_cipher 
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter your massage.\n");

    ch = getchar();
    while (ch != '\r')
    {
        printf("%c", ch + 1);
        ch = getchar();
    }

    return 0;
}

/* #include <stdio.h>

int main()
{
    char ch;

    printf("Enter your message.\n");

    // Read and discard the newline character (if present)
    ch = getchar();
    // while (ch == '\n')
    // {
    //     ch = getchar(); // Discard any additional newlines
    // }

    while (ch != '\v') //) && (ch != '\n')
    {
        printf("%c", ch + 1);
        ch = getchar();
    }

    return 0;
}
 */