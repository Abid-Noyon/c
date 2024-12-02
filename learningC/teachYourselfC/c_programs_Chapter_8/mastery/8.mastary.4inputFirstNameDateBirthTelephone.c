#include <stdio.h>
#include <conio.h>

int main(void)
{
    char fName[20];
    char dtBirth[20];
    char telephone[15];
    printf("Enter first name: ");
    scanf("%s", fName);
    getchar();
    printf("Enter date of birth(this formate mm/dd/yy): ");
    scanf("%[0123456789/]", dtBirth);
    getchar();
    printf("Enter Telephone: ");
    scanf("%[0123456789+]", telephone);

    printf(fName);
    printf("\n");
    printf(dtBirth);
    printf("\n");
    printf(telephone);

    return 0;
}