/* // we will exchange two files
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *f1, *f2, *temp;
    char ch;

    // see if correct line of command line arguments
    if (argc != 3)
    {
        printf("Usage: exchange <f1> <f2>.\n");
        exit(1);
    }

    // open first file
    if ((f1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open first file.\n");
        exit(1);
    }

    // open second file
    if ((f2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Cannot open second file.\n");
        exit(1);
    }

    // open temporary file
    if ((temp = fopen("temp.tmp", "wb")) == NULL)
    {
        printf("Cannot open temporary file.\n");
        exit(1);
    }

    // copy f1 to temp
    while (!feof(f1))
    {
        ch = fgetc(f1);
        if (!feof(f1))
            fputc(ch, temp);
    }
    fclose(f1);

    // open first file for output
    if ((f1 = fopen(argv[1], "wb")) == NULL)
    {
        printf("Cannot open first file.\n");
        exit(1);
    }

    // copy f2 to f1
    while (!feof(f2))
    {
        ch = fgetc(f2);
        if (!feof(f2))
            fputc(ch, f1);
    }
    fclose(f2);
    fclose(temp);

    // open second file for output
    if ((f2 = fopen(argv[2], "wb")) == NULL)
    {
        printf("Cannot open second file.\n");
        exit(1);
    }

    // open temp file for input
    if ((temp = fopen("temp.tmp", "rb")) == NULL)
    {
        printf("Cannot open temporary file.\n");
        exit(1);
    }

    // copy tmep to f2
    while (!feof(temp))
    {
        ch = fgetc(temp);
        if (!feof(temp))
            fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
    fclose(temp);

    return 0;
}
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *temp;
    char ch;
    // check if file arguements are provided or not
    if (argc != 3)
    {
        printf("Please provide <from file> and <destination file>\n");
        exit(1);
    }
    // now open file 1 and temp
    if ((fp1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file 1\n");
        exit(1);
    }
    // open temp with wb mode
    if ((temp = fopen("temp.temp", "wb")) == NULL)
    {
        printf("cannot open temp file\n");
        exit(1);
    }
    // now copy file 1 to temp

    while (!feof(fp1))
    {
        ch = fgetc(fp1);
        if (ferror(fp1))
        {
            printf("Error reading file 1\n");
            exit(1);
        }
        if (!feof(fp1))
        {
            fputc(ch, temp);
        }
    }
    if ((fclose(fp1)) == EOF)
    {
        printf("Error closing file 1\n");
        exit(1);
    }
    if ((fclose(temp)) == EOF)
    {
        printf("Error closing temp file\n");
        exit(1);
    }

    // now open file 1 and to again for writing from file 2 to file 1
    if ((fp1 = fopen(argv[1], "wb")) == NULL)
    {
        printf("Cannot open file 1\n");
        exit(1);
    }
    if ((fp2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Cannot open file 2\n");
        exit(1);
    }
    while (!feof(fp2))
    {
        ch = fgetc(fp2);
        if (ferror(fp2))
        {
            printf("Error reading file 2\n");
            exit(1);
        }
        if (!feof(fp2))
        {
            fputc(ch, fp1);
        }
    }
    if ((fclose(fp1)) == EOF)
    {
        printf("Error closing file 1\n");
        exit(1);
    }
    if ((fclose(fp2)) == EOF)
    {
        printf("Error closing fp2 file\n");
        exit(1);
    }
    // done exchanging from file 2 to file 1

    // now give data from temp to file 2
    if ((temp = fopen("temp.temp", "r")) == NULL)
    {
        printf("Cannot open temp file\n");
        exit(1);
    }

    if ((fp2 = fopen(argv[2], "wb")) == NULL)
    {
        printf("cannot open file 2n");
        exit(1);
    }
    while (!feof(temp))
    {
        ch = fgetc(temp);
        if (ferror(temp))
        {
            printf("Error reading temp file\n");
            exit(1);
        }
        if (!feof(temp)) // I think this if statement is redundent I will remove it to check in future you can try
        {
            fputc(ch, fp2);
        }
    }
    // close f2 and temp
    if ((fclose(temp)) == EOF)
    {
        printf("Error closing temp file\n");
        exit(1);
    }
    if ((fclose(fp2)) == EOF)
    {
        printf("Error closing fp2 file\n");
        exit(1);
    }
    return 0;
}