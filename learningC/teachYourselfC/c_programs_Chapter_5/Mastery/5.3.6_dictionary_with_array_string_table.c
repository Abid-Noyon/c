#include <stdio.h>
#include <string.h>

char d[][2][40] = {
    "house", "where you live",
    "car", "what you drive",
    "chair", "where you sit",
    "ball", "round object for playing",
    "food", "what you eat",
    "abid", "your friend",
    "", ""};

int main()
{
    char word[80];
    int i;
    printf("Enter word: ");
    gets(word);
    for (i = 0; strcmp(d[i][0], ""); i++) // The loop continues as long as the condition strcmp(d[i][0], "") evaluates to a non-zero value. A non-zero return value from strcmp indicates that the two strings (d[i][0] and the empty string) are not equal. This means there's potentially a word in the dictionary to compare with the user input. The loop stops when it encounters the empty string (""). This marks the end of the dictionary.
    {
        if (!strcmp(d[i][0], word))
        {
            printf("\n%s- meaning: %s", word, d[i][1]);
            break;
        }
    }
    if (!strcmp(d[i][0], ""))
        printf("\nWord doesnt exist in dictionary.");

    return 0;
}

//_dictionary_with_array_string_table