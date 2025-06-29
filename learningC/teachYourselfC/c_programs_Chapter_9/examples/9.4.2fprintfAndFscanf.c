/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    double ld;
    int d;
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

    fprintf(fp, "%f %d %s", 12345.342, 1908, "hello");
    fclose(fp);

    // open file for input
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    fscanf(fp, " %lf%d%s", &ld, &d, str);
    printf("%f %d %s", ld, d, str);
    fclose(fp);

    return 0;
} */

// practise 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    double ld;
    int d;
    char str[80];
    // first check for file name provided or not
    if (argc != 2)
    {
        printf("please provide a file name to write data as command line arguement\n");
        exit(1);
    }
// now lets open the file for storing data
    if ((fp = fopen(argv[1], "w")) == NULL)
    {
        printf("cant open file for writing data\n");
        exit(1);
    }
    //lets put data to the file
    fprintf(fp, "%f %d %s", 12345.342, 1908, "hello, Abid's, world!");
    // data writing done now lets close the file
    if (fclose(fp)==EOF)
    {
        printf("cant close the file after writing data\n");
        exit(1);
    }
    // now lets reopen the file for reading data
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("cant open file for writing data\n");
        exit(1);
    }
    // reading and storing data to var
    fscanf(fp, "%lf %d %s", &ld, &d, str);
    printf("%f %d %s", ld, d, str);
    // close the file
    if (fclose(fp) == EOF)
    {
        printf("cant close the file after writing data\n");
        exit(1);
    }
    return 0;
}