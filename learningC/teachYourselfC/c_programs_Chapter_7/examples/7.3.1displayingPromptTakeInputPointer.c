/* #include <stdio.h>
void prompt(char *msg, int *num);

int main()
{
    int i;
    prompt("Enter a number: ", &i);
    printf("Your number is: %d", i);
}

void prompt(char *msg, int *num)
{
    printf(msg);
    scanf("%d", num);
} */

// practice 1
// this program prompt a message and take an input from the user

/* #include <stdio.h>
void promt(char *mess, int *num);

int main(void)
{
    int a;
    promt("Enter a number: ", &a);
    printf("You entered: %d", a);
    return 0;
}
void promt(char *mess, int *num)
{
    printf(mess);
    scanf("%d", num);
} */

// now here this prompt will take a string input
#include <stdio.h>
void prompt(char *mess, char *string);

int main(void)
{
    char string[255];
    prompt("Enter a string(Max 255 char): ", string);
    printf("You entered: ");
    printf(string);
    return 0;
}
void prompt(char *mess, char *string)
{
    printf(mess);
    gets(string);
}