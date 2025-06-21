#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char names[100][40], numbers[100][40];
int loc = 0;

int menu(void);
int enter(void);
int load(void);
int save(void);
int find(void);

int main(void)
{
    int choice;
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            enter();
            break;
            case 2:
            find();
            break;
            case 3:
            save();
            break;
            case 4:
            load();
            break;
        }
    } while (choice!=5);
    
}

int menu(void)
{
    int i;
    char str[80];

    printf("1. Enter names and numbers\n");
    printf("2. Find numbers\n");
    printf("3. Save directory to disk\n");
    printf("4. Load directory from disk\n");
    printf("5. Quit\n");

    do
    {
        printf("Enter your choice: ");
        fgets(str, sizeof(str), stdin);
        i= atoi(str);
        printf("\n");
    } while (i<1 || i>5);
    
}
int enter(void)
{

}
int load(void)
{
}
int save(void)
    {

    }
int find(void)
{
    
}