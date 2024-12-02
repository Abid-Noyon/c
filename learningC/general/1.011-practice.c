/*The printf( ) function is used to output information to the
screen. Write a program that displays This is the number 100.
(Output the 100 as a number, not as a string.)*/

// #include <stdio.h>

// int outnum(int x);

// int main()
// {
//     printf("This is the number %d.", outnum(100));
//     return 0;
// }

// int outnum(int x)
// {
//     // printf("%d", x);
//     return x;
// }

// or just simply
// #include <stdio.h>

// int main()
// {
//     // Displaying the number 100 using printf()
//     printf("This is the number %d.\n", 100);

//     return 0;
// }

/*problem 3: 7. Write a program that inputs an integer from the keyboard and
displays its square.*/
// #include <stdio.h>

// int sqrIt(void);

// int main(void)
// {
//     // sqrIt();
//     printf("The square of the number: %d", sqrIt());
//     return 0;
// }

// int sqrIt(void)
// {
//     int num;
//     printf("Enter a number to square it: ");
//     scanf("%d", &num);
//     return num * num;
// }

/*1O. A function called Myfunc( ) has these three parameters: an int
called count, a float called balance, and a char called Ch, The
function does not return a value. Show how this fUnction is
prototyped*/

#include <stdio.h>

void Myfunc(int count, float balance, char ch);

int main()
{
    Myfunc(10, 100.78, 'A'); // we can just put the value here or read data from the user
    return 0;
}
void Myfunc(int count, float balance, char ch)
{
    printf("Enter count blance and char: ");
    scanf("%d %f %c", &count, &balance, &ch);
    printf("You have entered Your count: %d, balance: %f and char: %c", count, balance, ch);
}