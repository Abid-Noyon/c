/* #include <stdio.h>

int main()
{
    int i, a[20], j, k, max = 0, maxi = 0, mode;

    printf("Enter values: ");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 20; i++)
    {
        k = a[i];

        for (j = i + 1; j < 20; j++)
        {
            if (k == a[j])
                max++;
            if (max > maxi)
            {
                maxi = max;
                mode = k;
            }
        }
    }
    printf("The mode is %d: ", mode);

    return 0;
} */

//_maximum_occurence_of_numbers_array

#include <stdio.h>

int main(void)
{
    int a[20], i, j, k, mode, max = 0, Cmax = 0;
    printf("Enter elements: ");
    // scanning or getting array inputs
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }
    // finding maximum occurence
    for (i = 0; i < 20; i++)
    {
        k = a[i];                    // asigning every element in k
        for (j = i + 1; j < 20; j++) // compares with the next element
        {
            if (k == a[j])
            {
                max++;
            }
            if (max > Cmax)
            {
                Cmax = max;
                mode = k;
            }
        }
    }
    printf("The mode is: %d", mode);

    return 0;
}