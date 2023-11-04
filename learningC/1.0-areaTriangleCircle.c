/* Program Name: MySimpleProgram
Description: This program will be used to find the area of a Triangle and Circle.
Author: Abid Noyon
Date: October 7, 2023 */

#include <stdio.h>
#include <math.h>

#define pi 3.1416

char authorName[] = "Abid Noyon";

int main()
{
    float x, y, z, s, areaTriangle;
    printf("\nEnter three sides: ");
    scanf("%f %f %f", &x, &y, &z);
    s = (x + y + z) / 2;
    printf("\nHalf range of the triangleis: %f \n", s);
    areaTriangle = sqrt(s * (s - x) * (s - y) * (s - z));
    printf("\nArea of the triangle is: %f \n", areaTriangle);

    int circleArea();
    {
        float r, circumference, areaCircle;
        printf("\nEnter radius: ");
        scanf("%f", &r);
        circumference = 2 * pi * r;
        printf("\nCircumference is: %f \n", circumference);
        areaCircle = pi * r * r;
        printf("\nArea of circle is: %f \n", areaCircle);
        printf("Author Name: %s", authorName);
    }
}