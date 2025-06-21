#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100] = "This is a test documents that will be written on a file and displayed back on computer screen";
    FILE *fp;
    char *p, ch;
    // opening file

    if ((fp = fopen("TestFile1", "w")) == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    // now assing str pointer to p
    // and write to file
    p = str;
    while (*p)
    {
        if ((fputc(*p, fp)) == EOF)
        {
            printf("Error writing file\n");
            exit(1);
        }
        p++;
    }
    fclose(fp);
    if ((fp = fopen("TestFile1", "r")) == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}