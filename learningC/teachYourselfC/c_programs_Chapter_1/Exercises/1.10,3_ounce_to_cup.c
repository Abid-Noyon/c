//_ounce_to_cup
#include <stdio.h>
float o_to_c();
int main()
{
    float cups;
    cups = o_to_c();
    printf("Result is %.2f cups.", cups);
    return 0;
}

float o_to_c()
{
    float ounces;
    printf("Enter ounce: ");
    scanf("%f", &ounces);
    return ounces / 8;
}

/* #include <stdio.h>

int main()
{
    // Define the conversion rate (ounces per cup)
    float ounces_per_cup = 8.0;

    // Declare variables
    float ounces, cups;

    // Prompt the user for the number of ounces
    printf("Enter the number of ounces: ");
    scanf("%f", &ounces);

    // Calculate the equivalent number of cups
    cups = ounces / ounces_per_cup;

    // Print the result
    printf("%.2f ounces is equal to %.2f cups\n", ounces, cups);

    return 0;
} */
