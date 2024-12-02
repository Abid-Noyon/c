#include <stdio.h>
#include <math.h>

void findRoots(double a, double b, double c)
{
    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        // Real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        // Real and equal roots
        double root = -b / (2 * a);

        printf("Roots are real and same.\n");
        printf("Root = %.2lf\n", root);
    }
    else
    {
        // Imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

int main()
{
    double a, b, c;

    // Input: Get coefficients from the user
    printf("Enter coefficients (a, b, c) of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check for a valid quadratic equation (a cannot be zero)
    if (a == 0)
    {
        printf("Invalid input. 'a' coefficient cannot be zero.\n");
    }
    else
    {
        findRoots(a, b, c);
    }

    return 0;
}