#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // Read input with fgets
    printf("Name: %s", name);
    printf("\nString lenght: %d", strlen(name));
    printf("\nName in lower case: %s", strlwr(name));
    printf("\nName in upper case: %s", strupr(name));
    printf("\nName in reverse: %s", strrev(name));
    char father[] = "Farid Hassan,";
    char mother[] = " Afroza Begum";
    printf("\nParents Name: %s", strcat(father, mother));
    printf("\ncompare Parents Name: %d", strcmp(father, mother));
    char gaurdian[30];
    strcpy(gaurdian, mother);
    printf("\ncurrent gaurdian: %s", gaurdian);

    return 0;
}
