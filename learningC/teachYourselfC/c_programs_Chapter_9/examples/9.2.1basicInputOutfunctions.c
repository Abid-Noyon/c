/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char ch, *p;
    int i;

    // open myfile for output
    if ((fp = fopen("myfile.txt", "w")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    // write str to disk
    p = str;
    while (*p)
        if (fputc(*p++, fp) == EOF)
        {
            printf("Error writing file.\n");
            exit(1);
        }

    fclose(fp);

    // open myfi!e for input
    if ((fp = fopen("myfile.txt", "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    // read back the file
    // my comment I dont know for mine this code not properly showing read file data in the terminal, it shows some c type character in the termainal so, here I used for loop as showed in the book and now it shows perfectly
    // while (ch = fgetc(fp) != EOF)
    //     putchar(ch);

    // another way of reading with for loop

    for (;;)
    {
        i = fgetc(fp);
        if (i == EOF)
        {
            break;
        }
        putchar(i);
    }

    fclose(fp);

    return 0;
} */

// practice 1 for basic creating and putting data in a file also read the file

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char data[80] = "Everything here will be written in the file\n";
    FILE *fp;
    char *p;
    int i;

    // opening file in the disk

    if ((fp = fopen("infoPromely.txt", "w")) == NULL)
    {
        printf("Error opening file.\n");
        exit(1); // a non-zero exit status indicates that the program terminated abnormally or encountered an error.
    }

    // writing data string to fp pointer
    p = data;
    while (*p)
    { if ((fputc(*p++, fp)) == EOF) {
            printf("Error writing file.\n");
            exit(1);
        }
    }
    fclose(fp);

    // now reopen that file for reading data from the file

    if ((fp = fopen("infoPromely.txt", "r")) == NULL)
    {
        printf("cant open file.\n");
        exit(1);
    }

    // now read data from fp
    // for that we will use for loop
    for (;;)
    {
        i = fgetc(fp);
        if (i == EOF)
        {
            break;
        }
        putchar(i);
    }

    // now dont forget to close file

    fclose(fp);

    return 0;
}