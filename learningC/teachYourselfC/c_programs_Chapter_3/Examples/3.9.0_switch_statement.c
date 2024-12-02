#include <stdio.h>

int main()
{
    int i;
    printf("Enter a number from 1- 4: ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    default:
        printf("Wrong entry");
        break;
    }
    return 0;
}