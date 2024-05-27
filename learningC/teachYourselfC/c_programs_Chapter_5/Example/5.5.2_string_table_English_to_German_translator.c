/* // English to German translator

#include <stdio.h>
#include <string.h>

char words[][2][40] = {
    "dog", "Hund",
    "no", "nein",
    "year", "Jahr",
    "child", "Kind",
    "I", "Ich",
    "drive", "fahren",
    "house", "Haus",
    "to", "zu",
    "", ""};

int main(void)
{
    char english[80];
    int i;

    printf("Enter English word: ");
    gets(english);

    // look up the word
    i = 0;
    // search while null string  not yet encountered
    while (strcmp(words[i][0], ""))
    {
        if (!strcmp(english, words[i][0]))
        {
            printf("German translation: %s", words[i][1]);
            break;
        }
        i++;
    }

    if (!strcmp(words[i][0], ""))
        printf("Not in dictonary\n");

    return 0;
}
 */

//_string_table_English_to_German_translator
// version 2

#include <stdio.h>
#include <string.h>

char dictionary[][2][40] = {
    "dog", "Hund",
    "cat", "Katze",
    "no", "nein",
    "year", "Jahr",
    "child", "Kind",
    "I", "Ich",
    "drive", "fahren",
    "house", "Haus",
    "to", "zu",
    "", ""}; //sentinel value marking the end of the array

int main(void)
{
    char english[80];
    int i;

    printf("Enter word to translate: ");
    gets(english);
    // look up the word
    i = 0;
    while (strcmp(dictionary[i][0], "")) // Loop until an empty string is found
    {
        if (!strcmp(english, dictionary[i][0])) // If the input word matches the current entry
        {
            printf("German translation is: %s\n", dictionary[i][1]);
            break; // Exit the loop after finding the translation
        }
        i++;
    }

    if (!strcmp(dictionary[i][0], "")) //if mathed with null If end of array is reached without finding the word
    {
        printf("Not in dictionary.\n");
    }
    
    return 0;
}

//_print_indivigual_char_of_string