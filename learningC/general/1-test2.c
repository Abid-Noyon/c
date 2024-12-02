/* #include <stdio.h>

int main()
{
    int num, arr[15], i, sum = 0;

    // promt for the elemetts of the arry
    printf("\nEnter the number of elemests: ");
    scanf("%d", &num);

    // Entering elemets and calculating sum
    printf("\nEnter elements: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // printing elemets and sum
    for (i = 0; i < num; i++)
    {
        printf("\na[%d]= %d", i, arr[i]);
    }
    printf("\nSum = %d", sum);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int arr[3][3], i,j;
    printf("\nEnter matrix of 3*3: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix is: \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int a[3][3] = {{2, 2, 2},
                   {2, 2, 2},
                   {2, 2, 2}};
    int b[3][3] = {{3, 3, 3},
                   {3, 3, 3},
                   {3, 3, 3}};

    int sum[3][3], i = 0, j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // prining sum
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

// sort an array using function

#include <stdio.h>
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
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {66, 84, 73};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, n);
    printf("\nSorted array: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}