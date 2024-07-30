#include <stdio.h>
#include <conio.h>

int main(void)
{
    char Fname[21];
    char Mname[21];
    char Lname[21];

    printf("Enter first name: max 20 char: \n");
    scanf("%20[a-zA-Z ]", Fname);
    printf("Enter Middle name: max 20 char: \n");
    getchar(); // putted this for carriage return not hamper the scanf
    scanf("%20[a-zA-Z ]", Mname);
    printf("Enter last name: max 20 char: \n");
    getchar();
    scanf("%20[a-zA-Z ]", Lname);

    printf("Your name: ");
    printf(Fname);
    printf(" ");
    printf(Mname);
    printf(" ");
    printf(Lname);
    return 0;
}

// this was the draft i made to work this proram,
/* #include <stdio.h>

int main(void)
{
    char fName[20];
    char mName[20];
    char lName[20];
    printf("Enter your first name: (max 20 char): ");
    scanf("%20[a-zA-Z]", &fName);
    printf("Enter your middle name: (max 20 char): ");
    scanf("%20[a-zA-Z]", &mName);
    printf("Enter your last name: (max 20 char): ");
    scanf("%20[a-zA-Z]", &lName);


    // or we can also sperate this
    // printf("Enter first name: ");
    // printf("Enter middle name: ");
    // printf("Enter last name: ");


    // scanf("%20s", &name[21]);
    // scanf("%20s", &name[41]);
    printf(fName);
    printf(mName);
    printf(lName);
    return 0;
} */