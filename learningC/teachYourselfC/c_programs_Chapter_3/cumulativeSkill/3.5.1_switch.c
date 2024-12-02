// first tried version
/* #include <stdio.h>

int main()
{
    char ch;
    do
    {
        printf("Press tab, Enter or Backspace(press 'q' to stop): ");
        ch = getchar();
        if (ch==EOF)
        {
            break;
        }
        
        switch (ch)
        {
        case '\t':
            printf("Tab\n");
            break;
        case '\n':
            printf("Enter\n");
            break;
        case '\b':
            printf("backspace\n");
            break;

        default:
            printf("Unknown\n");
            break;
        }
    } while (ch != 'q');

    return 0;
} */


// ________________________
/* #include <stdio.h>

int main()
{
    char ch;

    do
    {
        printf("Press tab, Enter or Backspace: ");
        ch = getchar();

        // Check if getchar() successfully read a character (not EOF)
        if (ch == EOF)
        {
            break; // Exit the loop if EOF is encountered
        }

        switch (ch)
        {
        case '\t':
            printf("Tab\n");
            break;
        case '\n':
            printf("Enter\n");
            break;
        case '\b': // Handle backspace explicitly
            printf("Backspace\n");
            break;
        default:
            printf("Unknown\n");
            break;
        }
    } while (ch != 'q');

    return 0;
} */

#include <stdio.h>

int main()
{
    char ch;

    do
    {
        printf("Press tab, Enter or Backspace: ");
        ch = getchar();

        // Check for EOF
        if (ch == EOF)
        {
            break;
        }

        switch (ch)
        {
        case '\t':
            printf("Tab\n");
            break;
        case '\n':
            printf("Enter\n");
            break;
        case '\b':
            printf("\b \b"); // Simulate backspace with backspace followed by space
            break;
        default:
            printf("Unknown\n");
            break;
        }
    } while (ch != 'q');

    return 0;
}
