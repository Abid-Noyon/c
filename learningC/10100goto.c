#include <stdio.h>
int main()
{
    int count=0;
    start:
    if(count>4)
        goto end;
    printf("%d", count);
    ++count;
        goto start;
    end:
    printf("\n");

return 0;
}