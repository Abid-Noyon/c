#include <stdio.h>
int main()
{
    int i;
    char ch;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter a letter:");
        ch = getchar();

        printf("\n");

        for (; ch; ch--)
            printf("%c", '.');
    }

    return 0;
}


//_puting_periods_upto_Ascii_value_of_a_number
/* #include <stdio.h>

int main()
{
    char ch;
    int i;
    for (i = 0; i < 10; i++)
    {
        // printf("Enter a letter: ");
        ch = getchar();
        printf("\n");
        for (; ch; ch--)
        {
            printf("%c", '.');
        }
    }

    return 0;
} */