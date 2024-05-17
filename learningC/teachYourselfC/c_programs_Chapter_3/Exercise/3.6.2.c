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


// puting periods upto Ascii value of a number
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