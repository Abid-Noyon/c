#include <stdio.h>

int main()
{
    int age = 10;
    int *pAge = &age;
    double gpa = 3.10;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;

    // printngg memory address by %p and &varName
    // printf("Number Address: %p\n Double: %p\n char: %p\n", &age, &gpa, &grade);

    // dereferencing by var address and infront *
    printf("Number Address: %d\n Double: %lf\n char: %c\n", *&age, *&gpa, *&grade);

    // printing memory address by what pointer hold
    // printf("Number Address: %p\n Double: %p\n char: %p\n", pAge, pGpa, pGrade);

    // defererencing pointer means what is in that address of pointer
    // printf("Number Address: %d\n Double: %lf\n char: %c\n", *pAge, *pGpa, *pGrade);
    return 0;
}

// 3_32_37_Writing_Files