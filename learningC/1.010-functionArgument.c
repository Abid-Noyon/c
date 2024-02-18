// /*A simple program that demonstrate sum function with argument of x and y, int value that are passing to sum function*/
// #include <stdio.h>

// void sum(int x, int y);

// int main(void)
// {
//     sum(10, 15);
//     sum(9, 6);
//     sum(81, 9);
//     sum(9*9, 4+5); // an argument to a function can consist of an expression

//     return 0;
// }

// void sum(int x, int y)
// {
//     printf("Sum: %d\n", x + y);
// }

// //This program uses outchar() function to output characters

// #include <stdio.h>

// void outchar(char ch);

// int main(void)
// {
//     outchar('A');
//     outchar('B');
//     outchar('I');
//     outchar('D');
//     return 0;
// }

// void outchar(char ch)
// {
//     printf("%c", ch);
// }

// // this program uses a outnum() function that takes one integer argument and display it on the screen
// #include <stdio.h>

// void outnum(int x);

// int main(void)
// {
//     outnum(84);
//     outnum(34);
//     return 0;
// }

// void outnum(int x)
// {
//     printf("%d\n", x);
// }

// // whats wrong with this program
// #include <stdio.h>
// void sqrIt(int x);
// int main(void)
// {
//     sqrIt(10);
//     return 0;
// }

// void sqrIt(int x)
// {
//     printf("%d\n", x * x);
// }

#include <stdio.h>

int sqrIt(int x); // Change return type to int

int main(void)
{
    int result = sqrIt(9); // Capture the result
    printf("%d\n", result);
    return 0;
}

int sqrIt(int x)
{
    return x * x; // Return the squared value
}
