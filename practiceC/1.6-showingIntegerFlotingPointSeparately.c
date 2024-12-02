// #include <stdio.h>
// //c program to show integer part and floating part separately of a floating number

// int main()
// {
//     // this is my thinking
//     float flotingNumber;
//     printf("Enter any float number: ");
//     scanf("%f", &flotingNumber);
//     int intPart = (int)flotingNumber;
//     float floatPart = flotingNumber - intPart;
//     printf("%d integer part and %.2f float part.", intPart, floatPart);
// }

// written in books
//  #include <stdio.h>

//     main()
//     {
//         float x, z;
//         int y;
//         printf("Enter any float number: ");
//         scanf("%f", &x);
//         y = (int)x;
//         z = x - y;
//         printf("%d integer part and %.2f float part.", y, z);
//     }

#include <stdio.h>

int main()
{
    float number;

    // Input
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Extract integer and fractional parts
    int integerPart = (int)number;
    float fractionalPart = number - integerPart;

    // Display the results
    printf("Integer part: %d\n", integerPart);
    printf("Fractional part: %f\n", fractionalPart);

    return 0;
}