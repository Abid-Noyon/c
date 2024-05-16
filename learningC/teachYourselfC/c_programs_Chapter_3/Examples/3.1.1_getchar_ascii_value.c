#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getche(); // code used to scan character
    printf("\nYou have entered %c. Its ASCII code is %d", ch, ch);
    return 0;
}

/* #include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    ch = getchar();

    printf("You entered: %c (ASCII value: %d)\n", ch, ch);

    return 0;
} */
//_getchar_ascii_value
