#include <stdio.h>

void func1(void);

int main(void)
{
    func1();

    return 0;
}

void func1(void)
{
    printf("This is printed.");
     return; /* return with no values */
    printf("This is not printed.");

}

//_return_use
