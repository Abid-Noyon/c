#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did great.");
        break;
    case 'B':
        printf("You did alright.");
        break;
    case 'C':
        printf("You did poorly.");
        break;
    case 'D':
        printf("You did very bad.");
        break;
    case 'F':
        printf("You failed.");
        break;
    default:
        printf("Invalid Grade");
    }
    return 0;
}
// 2_21_27_Structs