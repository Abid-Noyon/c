/* #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count[26];

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int i;

    // see if filename is specified
    if (argc != 2)
    {

        exit(1);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = toupper(ch);
        if (ch >= 'A' && ch <= 'Z')
            count[ch - 'A']++;
    }

    for (i = 0; i < 26; i++)
        printf("%c occured %d times\n", i + 'A', count[i]);

    fclose(fp);

    return 0;
}
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// int count[26]; // we need this for storing the letter frequency

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int i;
    int count[26] = {0}; // make count array initialized to zero before use or make it a global var

    // lets check first if user provided file name in command line or not
    if (argc != 2)
    {
        printf("Please provide a file name as command line arguements\n");
        exit(1);
    }
    // now lets open the file with file pointer
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("cant open file\n");
        exit(1);
    }
    // now read data and store it to an array
    while ((ch = fgetc(fp)) != EOF)
    {
        ch = toupper(ch); // for checking capital and small letters lets convert it to all upper and add required library file for conversion which is ctype.h
        // to check only for letter lets create an if statement
        if (ch >= 'A' && ch <= 'Z')
        {
            count[ch - 'A']++; // here in between [], this help to calculate index and ++ operator increases the value stored at the calculated index
        }
    }
    // now lets output the array
    for (i = 0; i < 26; i++)
    {
        printf("%c found %d times.\n", i + 'A', count[i]);
    }

    // now must close file
    fclose(fp);

    return 0;
}