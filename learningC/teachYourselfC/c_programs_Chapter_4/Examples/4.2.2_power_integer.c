/* #include <stdio.h>

int power(int m, int e);

int main()
{
    int m, e;
    m = 2;
    e = 3;

    printf("%d to the %d is %d\n", m, e, power(m, e));
    printf("4 to the 5th is %d\n", power(4, 5));
    printf("3 to the 3rd is %d\n", power(3, 3));

    return 0;
}

int power(int m, int e)
{
    int temp;

    temp = 1;
    for (; e > 0; e--)
        temp = temp * m;
    return temp;
} */

// lets create a power function thought it exits in library function

/* #include <stdio.h>

int power(int a, int b);

int main()
{
    printf("%d", power(2,4));
    // power(2,4);
    return 0;
}
int power(int a, int b)
{
    int temp = 1;
    for ( ; b>0; b--)
    {
        temp = temp*a;
    }
    return temp;
} */
//_power_integer