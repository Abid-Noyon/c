#include <stdio.h>
void Myfunc(int count, float balance, char ch);
int main()
{
    Myfunc(1, 100.567, 'A');
    return 0;
}
void Myfunc(int count, float balance, char ch)
{
    printf("Count: %d, Blance: %.2f, Grade: %c ", count, balance, ch);
}