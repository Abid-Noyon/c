// #include<stdio.h>

// int main()
// {
//     int x = 5;
//     printf("%d\n", x);

//     x = 6;
//     printf("%d", x);
//     return 0;
// }

/* #include <stdio.h>

int main()
{
    printf("Abid");
    printf("abid");
    scanf("%d");
    return 0;
} */

/* #include <stdio.h>
#include <math.h>

// Function to find roots of a quadratic equation
void findRoots(double a, double b, double c)
{
    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0)
    {
        // Real and different roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        // Real and equal roots
        double root = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root);
    }
    else
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Root 1: %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2: %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

int main()
{
    double a, b, c;

    // Input coefficients from the user
    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    // Call the function to find roots
    findRoots(a, b, c);

    return 0;
} */

/* #include <stdio.h>

void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {66, 84, 73, 72, 104, 98, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    printf("Sorted array: ");
    for (int k = 0; k < n; k++)
        printf("%d ", arr[k]);
    return 0;
}
 */


#include <stdio.h>
#include <string.h>

int main()
{
    char str1[12]= "Hellow ", str2[12]= "World", str3[12];
    int len, cmp;
    strcpy(str3,str1);
    printf("strcpy(str3, str1): %s\n", str3);
    while (char c=getchar(f)= EOF)
    {
        /* code */
    }
    
    return 0;
}