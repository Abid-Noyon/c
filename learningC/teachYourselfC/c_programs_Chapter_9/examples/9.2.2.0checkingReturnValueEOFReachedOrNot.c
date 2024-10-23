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
}

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

/* // now see the more profession look
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
} */