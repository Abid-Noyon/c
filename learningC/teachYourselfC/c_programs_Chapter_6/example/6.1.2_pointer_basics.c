#include <stdio.h>
int main()
{
    int *p;
    double q, temp;

    temp = 1234.34;
    p = &temp;
    q = *p;

    printf("%lf", q);

    return 0;
}
// pointer_basics

/* #include <stdio.h>

int main()
{
    int q;
    double *fp;
    fp = &q;
    *fp = 1234.34;
    printf("%d", q);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int *p, q;
    p = &q;
    *p = 1000;
    return 0;
} */
// explanation:
// // Memory (before `p = &q;`):
// +------+     +---+
// |  p   |     | q |
// +------+     +---+
// |      |     |   |
// +------+     +---+

// Memory (after `p = &q;`):
// +------+     +---+
// |  p   |     | q |
// +------+     +---+
// | &q   |     |   |
// +------+     +---+

// Memory (after `*p = 1000;`):
// +------+     +-----+
// |  p   |     |  q  |
// +------+     +-----+
// | &q   |     |1000 |
// +------+     +-----+