// write a c program to reverse the elements if an array also display the sum of the elements of that array

#include <stdio.h>

int main()
{
    int i, n, a[100];
    int sum = 0;
    printf("Inputing an array and displaying it in reverse\n");
    printf("_______________________________________________\n");
    printf("Input no of array elements: ");
    scanf("%d", &n);
    printf("Input %d elements. \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe values stored into the array are in reverse order.");
    for (i = n - 1; i >= 0; i--)
    {
        printf("% 5d", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("Array elements sum = %d", sum);
    return 0;
}