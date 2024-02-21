/*1. Write a program that outputs a table Of numbers. Each linc in
thc table contains three entries: the number, its square, and its
cube, Begin with 1 and end with 1O. Also. use a for loop to
generate the numbers.*/

// #include <stdio.h>

// int main(void)
// {
//     int i;
//     for (i = 1; i < 11; i++)
//     {
//         printf("Number: %d\t Square: %d\t Square: %d\t\n", i, i * i, i * i * i);
//     }

//     return 0;
// }
/*2. Write a program that prompts the user for an integer value.
Next, using a for loop, make it count down from thisvaluc to O,
displaying each number on its own line. When it reaches O, have
it sound the bell,*/

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (int i = num; i >= 0; i--)
    {
        printf("%d\n", i);
        if(i==0)
        {
            printf("\a");
        }
    }
    
    return 0;
}