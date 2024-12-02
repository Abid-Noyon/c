#include <stdio.h>

void sayHi(char name[], int age);

int main()
{
    sayHi("Abid", 22);
    return 0;
}

void sayHi(char name[], int age)
{
    printf("Hello %s! You are %d.", name, age);
}

// 1_45_37_Return_Statement