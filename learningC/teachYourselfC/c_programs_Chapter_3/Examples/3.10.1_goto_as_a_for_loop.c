/* #include <stdio.h>
int main()
{
    int i;

    i = 1;
again:
    printf("%d", i);
    i++;
    if (i < 10)
        goto again;

    return 0;
}
 */

#include <stdio.h>

int main(void)
{
    int i = 0;
again:
    printf("%d ", i);
    i++;
    if (i < 10)
    {
        goto again;
    }

    return 0;
}
//_goto_as_a_for_loop