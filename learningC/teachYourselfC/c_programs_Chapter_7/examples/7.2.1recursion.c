#include <stdio.h>

void recurse(int i);

int main(void)
{
    recurse(0);
    return 0;
}

void recurse(int i)
{
    if (i < 10)
    {
        recurse(i + 1); // this calls the recurstion function again until the condition satisfies. and when dissatisfies returs all values from the stack 
        printf("%d ", i);
    }
}
