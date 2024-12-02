// this is the first version tried but it has some problem
// this converting program while loop not terminating and also providing garbase value after last letter

/* #include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter text to convert Upper case (press 'Enter to stop'): ");
    do
    {
        ch = getchar();
        ch = ch - 32;
        printf("%c", ch);
    } while (ch != '\n' && ch != '\r');

    return 0;
} */

// second try still problem exits

/* #include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter text to convert Upper case (press 'Enter to stop'): ");
    do
    {
        ch = ch - 32;
        printf("%c", ch);
        ch = getchar();
    } while (ch != '\n' && ch != '\r');

    return 0;
} */

// ____________________
// this code solves those problem

#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter text to convert Upper case (press 'Enter to stop'): ");
    do
    {
        if (ch >= 'a' && ch <= 'z') // only converts lower letter a-z but skips other character
        {
            ch = ch - 32; // Differance between lower case and upper case letter is 32
        }
        printf("%c", ch);
        ch = getchar();
    } while (ch != '\n' && ch != '\r'); // runs unless pressing enter here r n for differernt operating system

    return 0;
}