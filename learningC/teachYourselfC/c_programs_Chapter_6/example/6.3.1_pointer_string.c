#include <stdio.h>

int main(void)
{
    float balance[3][4] = {
        {1.0, 2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0, 8.0},
        {9.0, 10.0, 11.0, 12.0}};

    float *p;
    // p = &balance; // This will give a warning: assignment from incompatible pointer type
    // heres the solution
    p = (float *)balance; // This will not give a warning
    printf("The value of balance[2][3] is %f\n", *(p + 2 * 4 + 3));
    return 0;
}

/* #include <stdio.h>

int main()
{
    char str[80];
    *(str+3)= 'c';
    printf("%c", *(str+3));
    return 0;
} */
