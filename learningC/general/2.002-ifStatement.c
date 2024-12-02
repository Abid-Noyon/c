// this program take a number and convert it feet/meter on users choice

// #include <stdio.h>

// int main(void)
// {
//     float num;
//     int choice;
//     printf("Enter a number to convert: ");
//     scanf("%f", &num);
//     printf("1: Feet to meter.\n");
//     printf("2: Meter to feet.\n");
//     printf("Enter choice: ");
//     scanf("%d", &choice);
//     if (choice == 1)
//     {
//         printf("%f m.", num / 3.28);
//     }
//     if (choice == 2)
//     {
//         printf("%f f.", num * 3.28);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is non-negative.");
    }
    return 0;
}