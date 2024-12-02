// #include <stdio.h>

// int main()
// {
//     char yourName[30];
//     scanf("%d", yourName);
//     printf("\nWelcome: %c", yourName);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double num1, num2;
//     char op;
//     printf("Enter two number :");
//     scanf("%lf %lf", &num1, &num2);

//     printf("Enter an operator(+,-,*,/):");
//     scanf(" %c", &op);

//     switch (op)
//     {
//     case '+':

//         printf("%lf+%lf=%lf\n", num1, num2, num1 + num2);
//         break;

//     case '-':

//         printf("%lf-%lf=%lf\n", num1, num2, num1 - num2);
//         break;

//     case '*':

//         printf("%lf*%lf=%lf\n", num1, num2, num1 * num2);
//         break;

//     case '/':

//         printf("%lf/%lf=%lf\n", num1, num2, num1 / num2);
//         break;

//     default:
//         printf("invalid operator");
//     }
// }

/* #include <stdio.h>

void main()
{
    float a = 3.85;
    double b = 3.85;

    printf("%.100f\n %.100lf", a, b);

    double a = 3.85;
    if (a >= 3.85)
        printf("Yes");
    else
        printf("No");
} */

/* #include <stdio.h>

int main()
{
    int i, arr[10], sum = 0, num;
    printf("\nENter nb of elements: ");
    scanf("%d", &num);

    // reading values
    printf("\nEnter the values: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // printing all elemets

    for (i = 0; i < num; i++)
    {
        printf("\ta[%d]= %d,", i, arr[i]);
    }
        printf("\nSum = %d", sum);

    return 0;
} */

/* #include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("\nThe value of a: %d", a);
    printf("\nThe value of ptr: %d", *ptr);
    printf("\nThe address of ptr: %d", ptr);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int ArrayA[3] = {1,2,3};
    int *ptr;
    ptr = ArrayA;
    printf("address: %p array value: %d", ptr, *ptr);
    ptr++;
    printf("\naddress: %p array value: %d", ptr, *ptr);
    return 0;
} */

/* // largest number of an array
#include <stdio.h>

int main()
{
    int maxArraySz, lgN, i, arr[10];
    printf("Total number of elements: ");
    scanf("%d", &maxArraySz);
    printf("\n");
    //storing array elements
    for(i=0; i< maxArraySz; ++i)
    {
        scanf("%d", &arr[i]);
    }
    lgN= arr[0];
    for(i=1; i<maxArraySz; ++i)
    {
        if(arr[i]>lgN)
        lgN=arr[i];
    }
    printf("Largest element: %d", lgN);
    return 0;
} */

// largest number of an array
/* #include <stdio.h>

int main()
{
    int maxArraySize, largtE, i, arr[10];
    printf("Enter total number of elements: ");
    scanf("%d", &maxArraySize);
    // entering elements
    printf("\nEnter elements: ");
    for (i = 0; i < maxArraySize; i++)
    {
        scanf("%d", &arr[i]);
    }
    // lets compare 1st element with other
    largtE = arr[0];
    for (i = 1; i < maxArraySize; i++)
    {
        if (arr[i] > largtE)
            largtE = arr[i];
    }
    // printing largest
    printf("\nThe largest Element: %d", largtE);
    return 0;
} */

// A c program to multiplying two matrices

#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], i, j;
    printf("Enter matrix a (2x2): \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter matrix a (2x2): \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // sum o f the matric

    int c[2][2];
    c[0][0] = a[0][0] + b[0][0];
    c[0][1] = a[0][1] + b[0][1];
    c[1][0] = a[1][0] + b[1][0];
    c[1][1] = a[1][1] + b[1][1];

    // showing matrix user entered
        printf("Matrix a: \n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("\t%d", c[i][j]);
            }
            printf("\n");
        }
    /*    printf("Matrix b: \n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("\t%d", b[i][j]);
            }
            printf("\n");
        } */
    return 0;
}

/* // series operation
// sum of the series 1^1+2^2+3^3+...+n^n
#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, sum = 0;
    printf("Enter value of N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        sum = sum + pow(i, i);
    }
    printf("The sum is: %d", sum);
    return 0;
} */

// -------------------------------------------------------------------

// 0_12_51_Drawing_a_Shape