// /* #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     // FILE *fpointer = fopen("employees.txt", "w");
//     // fprintf(fpointer, "hello!");
//     // with w mode if file not exists it will create and everything will be overwritten
//     // fprintf(fpointer, "Overwritten  ");
//     // to write after existence text use a mode
//     FILE *fpointer = fopen("employees.txt", "a");
//     fprintf(fpointer, "\nI am Abid.");

//     fclose(fpointer);
//     return 0;
// } */

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
/* #include <stdio.h>

int main()
{
    // FILE *messUsageP = fopen("MessUsage.txt", "w");
    FILE *messUsageP = fopen("MessUsage.txt", "a");
    // fprintf(messUsageP, "Wlc! This is a mess database");
    fprintf(messUsageP, "\nName: Abid\nJobber \nNasim");
    fclose(messUsageP);
    return 0;
} */

// practice 2 of reading and writing files

/* #include <stdio.h>

int main()
{
    // FILE *messUsageP = fopen("MessUsage.txt", "w");
    FILE *messUsageP = fopen("MessUsage.txt", "a"); // we will append file
    fprintf(messUsageP, "\nAbid\nJobber\nNasim"); // its better to start with a new line using \n
    fclose(messUsageP);
    return 0;
} */

// file writing practice 3

/* #include <stdio.h>

int main(void)
{
    // FILE *employeTextP = fopen("EmployeText.txt", "w");
    // after writing we will append to add new text
    FILE *employeTextP = fopen("EmployeText.txt", "a");
    // its better to start with \n while append
    fprintf(employeTextP, "\nName of the people");
    fclose(employeTextP);
    return 0;
} */

// Practice date:  3 july, 2024
// creating file
#include <stdio.h>

int main(void)
{
    // FILE *pPersonalDetails = fopen("personalInfo.txt", "w");
    // fprintf(pPersonalDetails, "Hi this a new line for the newly created text file.");
    // fclose(pPersonalDetails);

    // now after creating this file lets append some extra line

    // FILE *pPersonalDetails = fopen("personalInfo.txt", "a");
    // fprintf(pPersonalDetails, "\nHi this a second line for the newly created text file.");
    // fclose(pPersonalDetails);

    // creating and wrting text file is done now lets see what is in that file means reading that file for that comment the above code

    // we need an array for holding text
    // lets create that array
    char text[255];
    FILE *p = fopen("personalInfo.txt", "r");
    fgets(text, 255, p);
    printf(text);
    fgets(text, 255, p);
    printf(text);
    fclose(p);

    return 0;
}