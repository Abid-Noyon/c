/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char *p, ch;

    // opening myfile for output
    if ((fp = fopen("myfile", "w")) == NULL)
    {
        printf("Error open file\n");
        exit(1);
    }

    // write str to disk
    p = str;
    while (*p)
    {
        if ((fputc(*p, fp)) == EOF)
        {
            printf("Error wtring file\n");
            exit(1);
        }
        p++;
    }
    // closing file
    fclose(fp);

    // open myfile for input
    if ((fp = fopen("myfile", "r")) == NULL)
    {
        printf("cant open file\n");
        exit(1);
    }

    // read back the file
    for (;;)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        putchar(ch);
    }
    fclose(fp);

    return 0;
} */

// another practice of the noob version
// We will read data mean characters from a file

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // first we need a source data to write on the file, right? we can provide that here with str or provide with another file but we will see that later
    char str[] = "This data will be written to a file and be read back";
    FILE *fp;
    char *p, ch;

    // now open the file pointer with a file name and mode
    if ((fp = fopen("mynoobfile", "w")) == NULL)
    {
        printf("Cant open file\n");
        exit(1);
    }

    // oka, now we have to transfer the str content to a pointer
    p = str;
    // now copying
    while (*p)
    {
        if ((fputc(*p, fp)) == EOF)
        {
            printf("Error writing file\n");
            exit(1);
        }
        p++;
    }
    // writing is done now we will close the file
    if (fclose(fp) == EOF)
    {
        printf("Error closing file\n");
        exit(1);
    }

    // now reopen file for reading
    if ((fp = fopen("mynoobfile", "r")) == NULL)
    {
        printf("Cant open file\n");
        exit(1);
    }

    for(; ;)
    {
        if((ch=fgetc(fp))==EOF)
        {

        break;
        }
        putchar(ch);
    }
    if (fclose(fp) == EOF)
    {
        printf("Error closing file\n");
        exit(1);
    }
} */

// for better version we will change reading section
/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char *p, ch;

    // opening myfile for output
    if ((fp = fopen("myfile", "w")) == NULL)
    {
        printf("Error open file\n");
        exit(1);
    }

    // write str to disk
    p = str;
    while (*p)
    {
        if ((fputc(*p, fp)) == EOF)
        {
            printf("Error wtring file\n");
            exit(1);
        }
        p++;
    }
    // closing file
    fclose(fp);

    // open myfile for input
    if ((fp = fopen("myfile", "r")) == NULL)
    {
        printf("cant open file\n");
        exit(1);
    }

    // read back the file here we can change
    for (;;)
    {
        // ch = fgetc(fp); we can skip this line giving the condition in if
        if ((ch = fgetc(fp)) == EOF)
        {
            break;
        }
        putchar(ch);
    }
    fclose(fp);

    return 0;
} */

// now see the more profession look
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char *p, ch;

    // opening myfile for output
    if ((fp = fopen("myfile", "w")) == NULL)
    {
        printf("Error open file\n");
        exit(1);
    }

    // write str to disk
    p = str;
    while (*p)
    {
        if ((fputc(*p, fp)) == EOF)
        {
            printf("Error wtring file\n");
            exit(1);
        }
        p++;
    }
    // closing file
    fclose(fp);

    // open myfile for input
    if ((fp = fopen("myfile", "r")) == NULL)
    {
        printf("cant open file\n");
        exit(1);
    }

    // read back the file
    // we will completely remove for loop and use while loop
    // for (;;)
    // {
    //     // ch = fgetc(fp); we can skip this line giving the condition in if
    //     if ((ch = fgetc(fp)) == EOF)
    //     {
    //         break;
    //     }
    //     putchar(ch);
    // }
    while ((ch = fgetc(fp)) != EOF) // looks better reducing lines
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}