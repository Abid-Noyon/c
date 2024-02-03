#include <stdio.h>

int main()
{
    int i, sum = 0, num;
    printf("Enter number of elements: \n");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the values: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // printing all elements of array

    for (i = 0; i < num; i++)
    {
        printf("\na[%d]=%d", i, arr[i]);
    }

    printf("\nSum = %d", sum);

    return 0;
}