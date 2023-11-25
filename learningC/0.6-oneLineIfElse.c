#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    // one line if else
    (age >= 18) ? printf("You are 18+.") : printf("You are below 18.");
    return 0;
}