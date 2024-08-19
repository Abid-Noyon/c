/* // Copy a file.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;
    char ch;

    // see if correct number of command line arguments
    if (argc != 3)
    {
        printf("Usage: copy <source> <destination>\n");
        exit(1);
    }

    // open source file
    if ((from = fopen(argv[1], "rb")) == NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }

    // open destination file
    if ((to = fopen(argv[2], "wb")) == NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }

    // copy the file
    while (!feof(from)) // feof returns non-zero if it reached eof and otherwise zero that means this loop will run until eof
    {
        ch = fgetc(from);
        if (ferror(from)) // ferror returns 0 if there is no error otherwise non-zero
        {
            printf("Error reading source file.\n");
            exit(1);
        }

        if (!feof(from))
            fputc(ch, to);
        if (ferror(to))
        {
            printf("Error writing destination file.\n");
            exit(1);
        }
    }

    if (fclose(from) == EOF) // fclose returns zero if there is no error closing the file otherwise it returns a value called EOF
    {
        printf("Error closing source file.\n");
        exit(1);
    }

    if (fclose(to) == EOF)
    {
        printf("Error closing destination file.\n");
        exit(1);
    }
    return 0;
} */

// practice 1

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;
    char ch;
    // check if file arg provided or not
    if (argc != 3)
    {
        printf("Please provide a <from file> and <to file>\n");
        exit(1);
    }
    // now lets open from and to pointer
    if ((from = fopen(argv[1], "rb")) == NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }
    if ((to = fopen(argv[2], "wb")) == NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }
    // now lets copy the file
    // while ((ch=fgetc(from))!=EOF) this was the previous version now will will check if its reached eof or faced any error
    while (!feof(from)) // check previous doc
    {
        ch = fgetc(from);
        if (ferror(from))
        {
            printf("Error reading source file.\n");
            exit(1);
        }
        if (!feof(from))
        {
            fputc(ch, to);
        }
        if (ferror(to))
        {
            printf("Error writing destination file.\n");
            exit(1);
        }
    }
    if (fclose(from) == EOF)
    {
        printf("Error closing source file.\n");
        exit(1);
    }
    if (fclose(to) == EOF)
    {
        printf("Error closing destination file.\n");
        exit(1);
    }

    return 0;
}
