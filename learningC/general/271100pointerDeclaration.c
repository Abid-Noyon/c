// #include <stdio.h>

// int main()
// {
//     // declaration = instruction manual
//     int n;
//     int *pn;
//     int **ppn;
//     int ***pppn;

//     n = 42;
//     pn = &n;
//     ppn = &pn;
//     pppn = &ppn;

//     printf("%d\n", ***pppn);
//     printf("Address of n=%p\n", &n);
//     printf("Address of *pn=%p\n", pn);
//     printf("Address of **ppn=%p\n", *ppn);
//     printf("Address of ***pppn=%p\n", **pppn);

//     return 0;
// }

// #include <stdio.h>
// int a, b;
// int *p;
// // int abidnoyon;
// int main()
// {
//     a = 1;
//     b = 2;
//     printf("address of variable a=%p\n", &a);
//     printf("address of variable b=%p\n", &b);
//     printf("address of variable p=%p\n", p);

//     p = &b;
//     printf("address of variable p=%p\n", p);
//     printf("address of variable b=%p\n", &b);
//     printf("address of variable a=%p\n", &a);

//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int *p;
    double q, temp;
    temp = 1234.5678;
    p = &temp;
    q = *p;
    printf("%f\n", q);
    printf("%f\n", *p);
    return 0;
}