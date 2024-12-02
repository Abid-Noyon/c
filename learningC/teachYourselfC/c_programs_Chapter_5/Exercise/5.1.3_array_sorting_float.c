/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float item[100];
    int a, b, t;
    int count;

    // read in numbers
    printf("How many numbers?: ");
    scanf("%d", &count);

    for (a = 0; a < count; a++)
        scanf("%f", &item[a]);

    // now sort them using a bubble sort
    for (a = 0; a < count; ++a)
    {
        for (b = count - 1; b >= a; --b)
        {
            // compare adjacent element
            if (item[b - 1] > item[b])
            {
                // exchange element
                t = item[b - 1];
                item[b - 1] = item[b];
                item[b] = t;
            }
        }
    }

    // display sorted list
    printf("\nSorted array: ");
    for (t = 0; t < count; t++)
    {
        printf("\n%.2f", item[t]);
    }

    return 0;
} */

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int item[100];
    int a, b, t;
    int count;

    // read in numbers
    printf("How many numbers?: \n");
    scanf("%d", &count);

    for (a = 0; a < count; a++)
        scanf("%d", &item[a]);

    // now sort them using a bubble sort
    for (a = 1; a < count; ++a)
    {
        for (b = count - 1; b >= a; --b)
        {
            // compare adjacent element
            if (item[b - 1] > item[b])
            {
                // exchange element
                t = item[b - 1];
                item[b - 1] = item[b];
                item[b] = t;
            }
        }
    }

    // display sorted list
    printf("\nSorted array: \n");
    for (t = 0; t < count; t++)
    {
        printf("\n%d", item[t]);
    }

    return 0;
}
 */

// version 2
// array sorting
#include <stdio.h>

int main(void)
{
    int a, b, t, maxCount;
    float sort[100];
    float temp;
    printf("How many number you wanna sort: ");
    scanf("%d", &maxCount);
    for (a = 0; a < maxCount; a++)
    {
        printf("\nEnter element %d: ", a + 1);
        scanf("%f", &sort[a]);
    }

    // now write sorting algorithm
    for (a = 0; a < maxCount; ++a)
    {
        for (b = maxCount - 1; b >= a; --b)
        {
            if (sort[b - 1] > sort[b])
            {
                temp = sort[b - 1];
                sort[b - 1] = sort[b];
                sort[b] = temp;
            }
        }
        //     by mistake i wrote this code in 1st for loop and discoverd great thing. this is how to sorting is done in the number of process eual to maxCount
        //    printf("\bThe sorted array: ");
        //    for (t = 0; t < maxCount; t++)
        //     {
        //         printf("%d\n", sort[t]);
        //     }
        // }
    }

    printf("\bThe sorted array: ");
    for (t = 0; t < maxCount; t++)
    {
        printf("%.2f\t", sort[t]);
    }
    return 0;
}
//_array_sorting_float