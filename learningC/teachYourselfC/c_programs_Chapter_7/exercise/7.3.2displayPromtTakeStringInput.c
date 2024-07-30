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

// this code is a bit older and please use the previous code for correct solution of the exercise
/* #include <stdio.h>

void prompt(char *msg, char *num);

int main(void)
{
    char i[80];
    prompt("Enter a number: ", i); // i is string here but we need to take a complete string input as said on the question
    printf("Your number is: %s", i);
}

void prompt(char *msg, char *num)
{
    printf(msg);
    scanf("%s", num); // scanf() cant take space input means cant take string or number after space
}
 */