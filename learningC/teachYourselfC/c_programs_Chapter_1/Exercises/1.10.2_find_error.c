// finding error in this program
// what do you think?
#include <stdio.h>
void sqrIt(int num);
int main(void)
{
    sqrIt(10);
    sqrIt(12);
    sqrIt(13);
    return 0;
}
void sqrIt(int num)
{
    printf("%d\n", num * num);
}

/* Missing return statement in sqrIt function :

    The sqrIt function doesn 't explicitly return anything. While functions without a return statement technically return an undefined value, it' s better practice to explicitly return a value,
    especially if the function is intended to calculate and potentially use the squar */

// we can also store sqr values in different variables for further use but right now we dont
/* #include <stdio.h>
int sqrIt(int num);
int main(void)
{
    sqrIt(10);
    sqrIt(12);
    sqrIt(13);
    return 0;
}
int sqrIt(int num)
{
    printf("%d\n", num * num);
} */
//_find_error