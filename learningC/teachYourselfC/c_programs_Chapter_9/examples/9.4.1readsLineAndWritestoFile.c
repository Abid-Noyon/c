/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[80];

    // check for command line argument
    if (argc != 2)
    {
        printf("Sepcify file name.\n");
        exit(1);
    }

    // open file for output
    if ((fp = fopen(argv[1], "w")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("Enter a blank line to stop.\n");
    do
    {
        printf(": ");
        gets(str);
        strcat(str, "\n"); // add new line
        if (*str != '\n')  // This line checks if the first character of the string str is not equal to a newline character ('\n'). The *str dereferences the pointer to the first character of str, allowing us to access the actual character value.
            fputs(str, fp);
    } while (*str != '\n');
    fclose(fp);

    // open file for input
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    // read back the file
    do
    {
        fgets(str, 79, fp);
        if (!feof(fp))
            printf(str);
    } while (!feof(fp));
    fclose(fp);

    return 0;
}
 */

// practice 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[80];

    // check for file name specified

    if (argc != 2)
    {
        printf("Please specify a file name in the command line\n");
        exit(1);
    }

    // open file for writing
    if ((fp = fopen(argv[1], "w")) == NULL)
    {
        printf("Cant open file for creating.\n");
        exit(1);
    }

    // saying input instruction for the user
    printf("Enter char and blank line to stop.\n");

    // taking user input for writing
    do
    {
        printf(": ");
        gets(str);
        strcat(str, "\n");
        if (*str != '\n')
        {
            fputs(str, fp);
        }

    } while (*str != '\n');

    // oka input done now close the file
    if (fclose(fp) == EOF) // with error checking
    {
        printf("cannot close the file\n");
        exit(1);
    }

    // now open the file in read mode
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cant open file for reading.\n");
        exit(1);
    }

    // showing output
    do
    {
        fgets(str, 79, fp);
        if (!feof(fp))
        {
            printf(str);
        }

    } while (!feof(fp));
    // reading done now close
    if (fclose(fp) == EOF) // with error checking
    {
        printf("cannot close the file\n");
        exit(1);
    }

    return 0;
}