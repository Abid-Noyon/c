/* #include <stdio.h>

int fact(int a);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    x = fact(x);
    printf("Factorial is %d", x);
}

int fact(int a)
{
    if (a == 1)
        return 1;
    else
        return a * fact(a - 1);
} */

// practise 2

#include <stdio.h>
int fact(int a);
int main(void)
{
    printf("Factorial: %d", fact(5));
    return 0;
}
int fact(int a)
{
    if (a == 1)
    {
        return 1; //find what it does
    }
    else
        return a * fact(a - 1);
}