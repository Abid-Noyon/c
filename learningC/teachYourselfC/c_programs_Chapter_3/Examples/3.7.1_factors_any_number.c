/* #include <stdio.h>

int main()
{
    int i;
    char ch;

    for (i = 1; i < 1000; i++)
    {
        if (!(i % 6))
        {
            printf("%d, more?(Y/N)", i);
            ch = getchar();
            if (ch == 'N')
                break;
            printf("\n");
        }
    }
    return 0;
} */

#include <stdio.h>

int main()
{
    int i;
    char ch;
    printf("Here are some factors of 3.\n");
    for (i = 1; i < 1000; i++)
    {
        if (!(i % 3))
        {
            printf("%d Want more? (Y/N): ", i);
            ch = getchar();
            if (ch == 'N')
            {
                break;
            }
            printf("\n");
        }
    }
    return 0;
}
//_factors_any_number