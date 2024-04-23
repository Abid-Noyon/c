#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct is a special type of data to hold different type of data in one place

struct student
{
    char name[30];
    char major[20];
    int age;
    double gpa;
};

int main()
{
    struct student student1;
    student1.age = 22;
    student1.gpa = 3.80;
    // this will not work as it is not array
    // student1.name = "Abid Noyon";
    // student1.major = "cse";
    // instead you have to use string copy function
    // strcpy(student1.name, "Abid Noyon");
    // to take input from user
    printf("Enter your Name: ");
    fgets(student1.name, 30, stdin);
    // strcpy(student1.name, "Abid Noyon");
    strcpy(student1.major, "cse");

    printf("Age: %d\n", student1.age);
    printf("Gpa: %lf\n", student1.gpa);
    printf("Name: %s\n", student1.name);
    printf("Major: %s\n", student1.major);
    return 0;
}

// 2_29_43_While_Loops
