#include <stdio.h>
void f(void);

int main(void)
{
#define LIGHTSPEED 186000
    // if this defined in main function then it can be used in any function
    f();
    return 0;
}
void f(void)
{
    printf("Lightspeed: %ld", LIGHTSPEED);
}