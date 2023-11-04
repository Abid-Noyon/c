#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    a = 46;
    b = 9;

    int result = a / b;    // Divide a by b
    int remainder = a % b; // Calculate the remainder of a divided by b

    printf("Result: %d\n", result);      // Print the result
    printf("Reminder: %d\n", remainder); // Print the remainder

    return 0; // Return 0 to indicate successful program execution
}