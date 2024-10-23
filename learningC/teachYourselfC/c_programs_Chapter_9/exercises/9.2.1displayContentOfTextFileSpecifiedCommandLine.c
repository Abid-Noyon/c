#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    // see if filename is specified
    if (argc != 2)
    {
        printf("Please specify file and as command line arguement\n");
        exit(1);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}

// reading data from a file by command line arguements