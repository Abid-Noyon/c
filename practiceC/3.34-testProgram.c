// #include <stdio.h>
// #define PI 3.1436
// int main()
// {
//     float r, area, cir;
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &r);
//     area = PI * r * r;
//     cir = 2 * PI * r;
//     printf("The area of the circle is: %.2f", area);
//     printf("\nThe circumference of the circle is: %.2f", cir);
//     return 0;
// }

// find the absolute value of an integer or modulus
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     if (n < 0)
//     {
//         n = -n;
//     }
//     printf("The absolute value: %d", n);
//     return 0;
// }

// Largest among three numbers
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter three integer: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > b)
//     {
//         if (a > c)
//         {
//             printf("\n%d is the largest.", a);
//         }
//         else
//         {
//             printf("%d is the largest.\n", c);
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             printf("%d is the largest.\n", b);
//         }
//         else
//         {
//             printf("%d is the largest.\n", c);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float n1, n2;
//     char op;

//     printf("Enter your expression. \n");
//     scanf("%f%c%f", &n1, &op, &n2);
//     if (op == '+')
//         printf("%.2f\n", n1 + n2);
//     else if (op == '-')
//         printf("%.2f\n", n1 - n2);
//     else if (op == '*')
//         printf("%.2f\n", n1 * n2);
//     else if (op == '/')
//     {
//         if (n2 == 0)
//         {
//             printf("Divide by zero not possible.\n");
//         }
//         else
//             printf("%.2f\n", n1 / n2);
//     }
//     else
//         printf("Unknown operator.\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     // Sentinel-controlled loop
//     int number;

//     printf("Enter numbers (enter 0 to stop): \n");

//     while (1)
//     {
//         printf("Enter a number: ");
//         scanf("%d", &number);

//         if (number == 0)
//         {
//             break; // Break out of the loop when the sentinel value (0) is entered
//         }

//         printf("You entered: %d\n", number);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the house number(hint-0 to 100) of Abid: \n");

//     while (1)
//     {
//         printf("\nEnter house number: ");
//         scanf("%d", &num);
//         if (num==48)
//         {
//             break;
//         }
//         printf("\nYou have entered %d. Which is not my house number.", num);

//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//     for (int i = a; i > 0; i--)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a= 10;
//     while (a>0)
//     {
//         printf("%d\n", a);
//         a--;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;
// LOOP:
//     do
//     {
//         if (a == 15)
//         {
//             a = a + 1;
//             goto LOOP;
//         }

//         printf("%d\n", a);
//         a++;
//     } while (a < 20);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a =10;
//     while (a<20)
//     {
//         if(a>16)
//         {
//             break;
//         }
//         printf("%d\n", a);
//         a++;
//     }

//     return 0;
// }

// showing the real part and floating part of a real number separately
//  #include <stdio.h>

// int main()
// {
//     int in;
//     float fn;
//     printf("Enter any floating number: ");
//     scanf("%f", &fn);
//     in =fn;
//     printf("Real part or integer part of the number: %d\n", in);
//     printf("floating part of the number: %f\n", fn-in);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int year;
//     printf("Enter year to check leap year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0) || ((year % 400 == 0) && (year % 100 != 0)))
//     {

//         printf("%d is leap year.\n", year);
//     }
//     else
//     {
//         printf("%d is NOT leap year.\n", year);
//     }

//     return 0;
// }

// even odd by conditional operator
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     // using conditional operator
//     (n % 2 == 0) ? printf("%d is even.", n) : printf("%d is odd.", n);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x = 5;
//     int y = ++x;
//     printf("%d\n", y);
//     printf("%d", x);

//     return 0;
// }


#include <stdio.h>
#include <float.h>

int main()
{
    printf("float size: %d\n", sizeof(float));
    printf("float min: %E\n", FLT_MIN);
    printf("float max: %E\n", FLT_MAX);
    printf("float precision value: %d\n", DBL_DIG);

    return 0;
}

// #include <stdio.h>

// // Define a new type using typedef
// typedef int Age;

// int main()
// {
//     // Use the new type
//     Age personAge = 25;

//     // Print the person's age
//     printf("Person's age: %d\n", personAge);

//     return 0;
// }
