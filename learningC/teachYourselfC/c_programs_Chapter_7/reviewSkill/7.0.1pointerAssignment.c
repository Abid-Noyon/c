#include <stdio.h>

int main(void)
{
    int i, *p;
    p=&i; // assigns i's address to p pointer int
    *p=19;
    *p=20; //dereferencing by * on p denoted the value of the address and here assings the or modifies the value also
    printf("%d", *p);
    return 0;
}