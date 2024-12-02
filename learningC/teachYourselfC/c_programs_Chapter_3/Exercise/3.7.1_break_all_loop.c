#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
// __________________
/* #include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
} */
// ____________________________
/* #include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);

        i++;
    } while (i < 10);

    return 0;
} */