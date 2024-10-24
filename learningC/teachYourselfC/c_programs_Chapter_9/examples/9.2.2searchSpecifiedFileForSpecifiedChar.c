/* // Search specified file for specified character.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

    FILE *fp;
    char ch;

    // see if correct number of command line arguments
    if (argc != 3)
    {
        printf("Usage: find <file name> <ch>\n");
        exit(1);
    }
    // open file for input
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    // look for character
    while ((ch = fgetc(fp)) != EOF)
        if (ch == *argv[2])
        {
            printf("%c found", ch);
            break;
        }

    fclose(fp);

    return 0;
} */

// practice 1 14 August 2024

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    if (argc != 3)
    {
        printf("Please enter a file name and char as command line arguement formate.\n");
        exit(1);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("cant open file\n");
        exit(1);
    }

    // search for the char
    int found = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == *argv[2])
        {
            printf("%c found", ch);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Not found\n");
    fclose(fp);

    return 0;
}