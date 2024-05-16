//_one_char_input
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("\nYou typed: %c", ch);
    return 0;
}
// Waits for the user to press a key on the keyboard.
// Reads the ASCII (American Standard Code for Information Interchange) value of the pressed key.
// Returns the integer representation of that ASCII value.