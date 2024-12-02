#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    unsigned count;

    // see if file name is specified
    if (argc != 2)
    {
        printf("File name missing.\n");
        exit(1);
    }

    // open  file
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    count = 0;

    while (!feof(fp))
    {
        fgetc(fp);
        if (ferror(fp))
        {
            printf("File error");
            exit(1);
        }
        count++;
    }

    printf("File has %u bytes", count - 1); // It's worth noting that this program counts the number of characters in the file, not the number of bytes. In most cases, a character corresponds to a byte, but in some cases, such as when dealing with multibyte characters or encoding schemes like UTF-8, a character may occupy multiple bytes.
    // The reason for subtracting 1 from count is likely due to the way the file reading loop is implemented. Typically, when reading a file byte by byte, the loop might increment the count variable one extra time after reaching the end of the file. This extra increment happens because the loop condition checks for the end-of-file (EOF) after incrementing the count.
    fclose(fp);

    return 0;
}
