/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    // FILE *fpointer = fopen("employees.txt", "w");
    // fprintf(fpointer, "hello!");
    // with w mode if file not exists it will create and everything will be overwritten
    // fprintf(fpointer, "Overwritten  ");
    // to write after existence text use a mode
    FILE *fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "\nI am Abid.");

    fclose(fpointer);
    return 0;
} */

// ----------------------------------------------
/* // This is a test program to take input from user and write it down on a text file

#include <stdio.h>

int main()
{
    char name[20] = "Alex";
    char semester[20] = "3rd Semester";
    int roll = 49;

    FILE *stuDetP = fopen("StudentDet.txt", "a");
    // fprintf(stuDetP, "This file will store all students data.");
    fprintf(stuDetP, "\n%s, %s, %d", name[20], semester[20], roll);
    fclose(stuDetP);
    return 0;
} */

// practice no 1 date 27 april, 24
#include <stdio.h>

int main()
{
    // FILE *messUsageP = fopen("MessUsage.txt", "w");
    FILE *messUsageP = fopen("MessUsage.txt", "a");
    // fprintf(messUsageP, "Wlc! This is a mess database");
    fprintf(messUsageP, "\nName: Abid\nJobber \nNasim");
    fclose(messUsageP);
    return 0;
}