// No this fragment is not correct 
// Cause: p or q just a pointer not a string that can enter string with gets() func
#include <stdio.h>

int main(void)
{
    char *p, *q;
    printf("Enter a string: ");
    p = gets(q);
    printf(p);
    return 0;
}

// lets try to work this code as much as possible
// here shown how to two string pointer can exchange values and how to call values
// you can do the same task much easier with just a string and a pointer

/* #include <stdio.h>

int main(void)
{
    char *p[50], *q[50];
    printf("Enter a string: ");
    *p=gets(q);
    printf(*p);
    return 0;
} */