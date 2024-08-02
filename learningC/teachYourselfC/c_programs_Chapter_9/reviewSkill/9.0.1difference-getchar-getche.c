/* 
// Header File: Defined in <stdio.h>.
// Functionality: Reads a single character from the standard input (stdin) and returns it. The character is not echoed (displayed) on the screen.
// Usage: Commonly used in standard C programming for reading characters without displaying them.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("\nYou entered: %c\n", ch);
    return 0;
} */


/* 
Header File: Defined in <conio.h>, which is a non-standard header file and primarily used in DOS/Windows environments.
Functionality: Reads a single character from the console and returns it. The character is echoed (displayed) on the screen as soon as it is typed.
Usage: Often used in console applications where immediate feedback is required.
 */

/* #include <conio.h>
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getche(); // this line inputs any single key including enter backspace button and returns immediately after pressing
    printf("\nYou entered: %c\n", ch);
    return 0;
} */