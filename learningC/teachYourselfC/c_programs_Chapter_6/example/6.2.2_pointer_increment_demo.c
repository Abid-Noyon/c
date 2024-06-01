#include <Stdio.h>
int main()
{
    int *p, q;
    p = &q;
    q = 1;
    printf("%p  ", p);

    // (*p)++; // now q is incremented and p is unchanged
    *p++;   // now p is incremented and q is unchanged
    printf(" %d %p", q, p);

    return 0;
}