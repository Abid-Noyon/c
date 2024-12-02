#include <stdio.h>

int main()
{
    int age = 10;
    int *pAge = &age;
    double gpa = 3.10;
    double *pGpa = &gpa; 
    char grade = 'A';
    char *pGrade = &grade; 

    printf("Number Address: %p\n Double: %p\n char: %p\n", &age, &gpa, &grade);
    printf("Number Address: %p\n Double: %p\n char: %p\n", pAge, pGpa, pGrade);
    return 0;
}

// 3_27_41_Dereferencing_Pointers