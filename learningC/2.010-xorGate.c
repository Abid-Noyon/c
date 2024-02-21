// #include <stdio.h>
// int xor (int a, int b);
// int main(void)
// {
//     int p = 1, q = 0;
//     printf("P XOR Q: %d\n", xor(p, q));
//     return 0;
// }
// int xor (int a, int b) 
// {
//     return (a || b) && !(a && b);
// }


// Do these two same outcome
#include <stdio.h>

int main(void)
{
    printf("0 && 1 || 1 : %d\n", 0 && 1 || 1);
    printf("0 && (1 || 1) : %d\n", 0 && (1 || 1)); //by precedience  && comes first then || and () are foremost
    return 0;
}