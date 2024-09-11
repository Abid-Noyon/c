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
        printf("provide a file name is command line arguement\n");    
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
} */


/* #include <stdio.h>
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
} */


// this is practice 3 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) // first we have make main func to accecpt command line arg
{
    FILE *fp; // we need a file pointer for file operation
    char ch;    // for storing char
    int wordCount[26]={0};

    // first we will check if user provided file name as cmd line arg or not
    if (argc!=2)
    {
        printf("please provide a file name as command line arguement.\n");
        exit(1);
    }
    
    //now open file in fp pointer
    if ((fp=fopen(argv[1], "r"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }
    // now read and store file char
    while ((ch=fgetc(fp))!=EOF)
    {
        ch=toupper(ch); // for checking small and capital all letters
        if (ch>='A' && ch<= 'Z') // for checking only letters
        {
            wordCount[ch-'A']++;
        }
        
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c found %d times.\n", i+ 'A', wordCount[i]);
    }
    
    fclose(fp);

    return 0;
}