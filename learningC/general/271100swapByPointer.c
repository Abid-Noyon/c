// #include <stdio.h>
// void swap(int *n, int *n1)
// {
//     int temp;
//     temp = *n;
//     *n = *n1;
//     *n1 = temp;
// }

// int main()
// {
//     int a, b;
//     a = 42;
//     b = 1337;
//     printf("a->%d\tb->%d\n", a, b);
//     swap(&a, &b);
//     printf("a->%d\tb->%d\n", a, b);
//     return 0;
// }

#include <stdio.h>
void swap(int *n, int *n1)
{
    int temp;
    temp = *n;
    *n = *n1;
    *n1 = temp;
}

int main()
{
    int a, b;
    a = 57;
    b = 786;
    int c= 33;
    printf("a=%d\t and b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d\t and b=%d\n", a, b);
    return 0;
}