/* #include <stdio.h>

int main()
{
    int a[10], i, j;

    printf("Enter 10 numbers: ");

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10, j != i; j++)
        {
            if (a[i] == a[j])
                printf("%d matches.\n", a[i]);
        }
    }

    return 0;
} */
//_array_element_match_checking

#include <stdio.h>

int main()
{
    int a[10], i, j;

    printf("Enter 10 numbers: ");

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i == j)
                continue;
            if (a[i] == a[j])
                printf("%d matches.\n", a[i]);
        }
    }

    return 0;
}