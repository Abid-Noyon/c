//_smallest_ascii_value
#include <stdio.h>

int main()
{
    char smallest = 'z';
    char letter[10];
    printf("Enter 10 letter: ");
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &letter[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (letter[i] < smallest)
        {
            smallest = letter[i];
        }
    }
    printf("The earliest letter alphabetically is: %c\n", smallest);
    return 0;
}
// Another for loop iterates through the letters array.
// Inside the loop, if (letters[i] < smallest) checks if the current letter's ASCII value is less than the current smallest value. If it is, smallest is updated with the current letter.
/* 
#include <stdio.h>

int main()
{
    char letter[15];
    char smallest = 'z';
    printf("Enter 15 letter: ");
    for (int i = 0; i < 15; i++)
    {
        scanf(" %c", &letter[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        if (letter[i] < smallest)
        {
            smallest = letter[i];
        }
    }
    printf("The earliest alphabet is: %c\n", smallest);
    return 0;
} */