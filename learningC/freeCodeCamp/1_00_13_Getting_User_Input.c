#include <stdio.h>

int main()
{
    // for taking int input
    /* int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are: %d", age); */

    // taking double
    /* double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("You gpa: %lf", gpa); */

    // taking char from user
    /* char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade); */

    // taking string from user
    // theres one problem with this code it cant input space and afterwords so only your first name will be inputted
    /* char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("You grade: %s", name); */

    // Heres the solution with fgets() function

    char fullName[30];
    printf("Enter your name: ");
    fgets(fullName, 30, stdin);
    printf("Your name: %s\n", fullName);

    return 0;
}

// 1_12_08_Building_a_Basic_Calculator