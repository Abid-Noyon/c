/* #include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    // one line if else
    (age >= 18) ? printf("You are 18+.") : printf("You are below 18.");
    return 0;
} */

#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter you age: ");
    scanf("%d", &age);
    (age >= 18) ? printf("You are 18+") : printf("You are not 18");
    return 0;
}