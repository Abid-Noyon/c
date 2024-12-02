#include <stdio.h>
void save();
void display();
void enter();
void quit();

int main()
{
    char ch;
    printf("What do you want? \n");

    printf("\nSave, Enter, Display or Quit? \nEnter first letter: ");
    ch = getchar();
    switch (ch)
    {
    case 'S':
        save();
        break;
    case 'E':
        enter();
        break;
    case 'D':
        display();
        break;
    case 'Q':
        quit();
        break;

    default:
        printf("Wrong entry. ");
        break;
    }
    return 0;
}
void save()
{
    printf("Saved!");
}
void display()
{
    printf("Displayed!");
}
void enter()
{
    printf("Entered!");
}
void quit()
{
    printf("Quited!");
}

//4.0.3_takes_input_char_until_pressing_enter.c