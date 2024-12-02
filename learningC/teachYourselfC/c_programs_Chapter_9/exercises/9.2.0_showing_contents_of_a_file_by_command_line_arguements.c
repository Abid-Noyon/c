/* //_showing_contents_of_a_file_by_command_line_arguements
// by Abid Noyon
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    if (argc != 2)
    {
        printf("Please provide a file name following program name\n");
        exit(1);
    }

    // opening file
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("cant open file\n");
        exit(1);
    }

    // now reading file
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);

    return 0;
} */

// practice 2
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    if (argc!=2)
    {
        printf("Please provide a file name\n");
        exit(1);
    }
    
    if ((fp = fopen(argv[1], "r"))==NULL)
    {
        printf("Cant open file\n");
        exit(1);
    }
    
    // now reading data
    while ((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }
    
    // now close the file
    fclose(fp);
    return 0;
}