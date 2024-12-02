// this code is faulty lets corrent this code below
/* #include <stdio.h>
void func(int num, int min, int max);

int main(void)
{
    int i;
    printf("Enter a number between 1 and 10: ");
    func(&i, 1, 10);
    return 0;
}
void func(int num, int min, int max)
{
    do
    {
        scanf("%d", num);
    } while (*num < min || *num > max);
} */

// corrections
#include <stdio.h>
void func(int *num, int min, int max); // the first parameter should be a pointer as func first passing an arguement

int main(void)
{
    int i;
    printf("Enter a number between 1 and 10: ");
    func(&i, 1, 10);
    return 0;
}
void func(int *num, int min, int max) // the first parameter should be a pointer as func first passing an arguement
{
    do
    {
        scanf("%d", num);
    } while (*num < min || *num > max); // i dont know what this function wanted to do with this condition but the major error on funtion declaration and definition
}
