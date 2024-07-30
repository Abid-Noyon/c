// all methods result in a pointer parameter being created
#include <stdio.h>
void f1(int num[5]);
void f2(int num[]);
void f3(int *num);

int main(void)
{
    int num[5]={1,2,3,4,5};
    f1(num);
    f2(num);
    f3(num);
    return 0;
}
void f1(int num[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
}
void f2(int num[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
}
void f3(int *num)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
}