// #include <stdio.h>

// float convert(void);

// float main(void)
// {
//     float pound;
//     pound = convert();
//     printf("Equivalent pound: %.2f", pound);
//     return 0;
// }

// float convert(void)
// {
//     float doller;
//     printf("Enter amount in doller: ");
//     scanf("%f", &doller);
//     return doller / 2;
// }

// /*Data type error*/
// #include <stdio.h>

// int f1(void);

// int main(void)
// {
//     double answer;
//     answer = f1();
//     printf("%f", answer);
//     return 0;
// }

// int f1(void)
// {
//     return 100;
// }

#include <stdio.h>

void main(void) // i is int and main function is void type
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    return i;
}