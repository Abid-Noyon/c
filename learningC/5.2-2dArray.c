// #include <stdio.h>

// int main()
// {
//     int twoDArray[3][3], i, j;
//     printf("\nEnter values of 2d array in 3*3 order: \n");
//     for (i = 0; i < 3; i++)
//         {
//             for (j = 0; j < 3; j++)
//             {
//                 scanf("%d", &twoDArray[i][j]);
//             }
//         }

//         printf("Matrix values: \n");
//         for (i = 0; i < 3; i++)
//         {
//             for (j = 0; j < 3; j++)
//             {
//                 printf("\t%d", twoDArray[i][j]);
//             }
//         printf("\n");
//         }
//     return 0;
// }

/*---------------------------------------------------*/

// #include <stdio.h>

// int main()
// {
//     int twoDArray[3][3], i, j;

//     printf("\nEnter values of 2d array in a 3x3 order: \n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &twoDArray[i][j]); // Removed the \n before %d
//         }
//     }

//     printf("Matrix values: \n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("\t%d", twoDArray[i][j]);
//         }
//         printf("\n"); // Added a new line after each row for better formatting
//     }

//     return 0;
// }

/*---------------------------------------------------*/

// A c program to add two matrix

// #include <stdio.h>

// int main()
// {
//     int a[3][3] = {{1, 2, 3}, {3, 4, 5}, {4, 3, 7}};
//     int b[3][3] = {{2, 4, 5}, {5, 6, 1}, {1, 3, 7}};
//     int sum[3][3], i = 0, j = 0;

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     printf("\nSum of the matrix is: \n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("\t%d", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], sum[2][2], i = 0, j = 0;
    printf("Enter values for matrix a: 2x2: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter values for matrix b: 2x2: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe resultant matrix of a+b\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nRow sum of a matrix:");

    int rowSum = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            rowSum += a[i][j];
        }
        printf("\t%d", rowSum);
        rowSum = 0;
    }
    printf("\ncol sum of a matrix: ");

    int colSum = 0;
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 2; i++)
        {
            colSum += a[i][j];
        }
        printf("\t%d", colSum);
        colSum = 0;
    }

    return 0;
}