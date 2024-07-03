/* #include <stdio.h>

int main()
{
    int mat3by2[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    // this just print a specific element of the 2d array
    // printf("%d", mat3by2[1][0]);
    // to print all elements of the array we use nested for loops
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d", mat3by2[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

// ---------------------------------------------------

// matrix multiplication

/* #include <stdio.h>

int main()
{
    int mat1[2][2] = {
        {1, 2},
        {5, 6}};

    int mat2[2][2] = {
        {6, 7},
        {9, 10}};

    int multipliedMat[2][2];

    multipliedMat[0][0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
    multipliedMat[0][1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    multipliedMat[1][0] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    multipliedMat[1][1] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

    int i, j;
    printf("Multiplicatin Result: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d", multipliedMat[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

// matrix multiplication practice 3

#include <stdio.h>

int main(void)
{
    int mat1[2][2] = {
        {1, 2},
        {5, 6}};
    int mat2[2][2] = {
        {6, 7},
        {9, 10}};
    int multiMat[2][2];

    multiMat[0][0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
    multiMat[0][1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    multiMat[1][0] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    multiMat[1][1] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

    // showing multiplication result
    printf("Result: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\t%d", multiMat[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}