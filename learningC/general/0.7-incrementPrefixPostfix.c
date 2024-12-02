/* #include <stdio.h>

int main()
{
    int i = 5;
    printf("Value i++, ++i, i++, ++i = %d %d %d %d", i++, ++i, i++, ++i);
    return 0;
}
 */

#include <stdio.h>

#define cube(x) (x*x*x)

int main(void)
{
    printf("cube of 3: %d", cube(3));
    return 0;
}