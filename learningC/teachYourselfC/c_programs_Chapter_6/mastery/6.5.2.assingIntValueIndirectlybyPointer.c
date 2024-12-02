#include <Stdio.h>

int main()
{
    int i,*p;
    p=&i;
    *p=8;
    printf("%d",i);
    
    return 0;
}