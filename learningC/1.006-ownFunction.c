/* A program with two function */
/* #include <stdio.h>

void func1(void); // prototype for function declaration

int main(void)
{
    printf("I ");
    func1();
    printf("c.");
    return 0;
}

void func1(void)
{
    printf("Like ");
} */

/*This program has three function */

/* #include <stdio.h>

void func1(void);
void func2(void);

int main()
{
    func2();
    printf("3");
    return 0;
}

void func2(void)
{
    func1();
    printf("2 ");
}

void func1(void)
{
    printf("1 ");
} */

#include <stdio.h>

void fLine(void); // prototype
void sLine(void); // prototype

int main(void)
{
    fLine();
    sLine();
    return 0;
}

void fLine(void)
{
    printf("The summer soilder, ");
}
void sLine(void)
{
    printf("the sunshine patriot.");
}