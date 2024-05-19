#include <stdio.h>

void f1(void);

int count; // global count

int main(void)
{
    count = 10;
    f1();
    printf("count in main(): %d\n", count);

    return 0;
}

void f1(void)
{
    int count; //local count
    count = 100; // if local and global varible has the same name compiler will always count local variable
    printf("count in f1():%d\n", count);
    return;
}
//_local_and_global_variable

/* #include <stdio.h>

int main()
{
    printf("This program will not compile."); //but it compiles maybe compilers are updated now
    int i;
    i =10;
    printf("%d", i);
    return 0;
} */