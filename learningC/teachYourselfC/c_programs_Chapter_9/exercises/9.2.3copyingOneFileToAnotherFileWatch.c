/* #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;
    char ch, watch;

    // see if correct number of command line arguments
    if (argc < 3)
    {
        printf("Usage: copy <source> <destination>.\n");
        exit(1);
    }

    // open source file
    if ((from = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }

    // open destination file
    if ((to = fopen(argv[2], "w+")) == NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }

    if (argc == 4 && !strcmp(argv[3], "watch"))
        watch = 1;
    else
        watch = 0;

    // copy the file
    while ((ch = fgetc(from)) != EOF)
    {
        fputc(ch, to);
        if (watch)
            putchar(ch);
    }

    fclose(from);
    fclose(to);

    return 0;
}
 */

// practice 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;
    char ch, watch;
    // check for cmd line arg provided or not
    if (argc < 3)
    {
        printf("Provide a <from file> and a <to file>\n");
        exit(1);
    }
    // open from file to from pointer
    if ((from = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open source file\n");
        exit(1);
    }
    if ((to = fopen(argv[2], "w+")) == NULL)
    {
        printf("Can't open destination file\n");
        exit(1);
    }
    if (argc == 4 && !strcmp(argv[3], "watch"))
    {
        watch = 1;
    }
    else
        watch = 0;

    while ((ch = fgetc(from)) != EOF)
    {
        fputc(ch, to);
        if (watch)
        {
            putchar(ch);
        }
    }
    fclose(from);
    fclose(to);

    return 0;
}