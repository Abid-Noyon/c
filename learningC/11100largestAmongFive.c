#include <stdio.h>

int main()
{
    int numbers[5];
    int largest, temp;

    // Read five numbers into the array
    printf("Enter five numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Find the largest number
    largest = numbers[0];
    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    // Sort the array in descending order using a simple bubble sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                // Swap the numbers
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Largest to smallest: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}