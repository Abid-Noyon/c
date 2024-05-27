/* #include <stdio.h>

int main()
{
    char text[10][80];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter string %d: ", i + 1);
        gets(text[i]);
    }

    do
    {
        printf("Enter number of string (1-10) :");
        scanf("%d", &i);
        i--; // adjust value to match array index
        if (i >= 0 && i < 10)
            printf("%s\n", text[i]);
    } while (i >= 0);

    return 0;
} */
//_string_input_show_one_at_a_time

// second version

#include <stdio.h>

int main(void)
{
    char text[10][40];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter string %d: ", i + 1);
        gets(text[i]);
    }

    do
    {
        printf("Enter number of string(1-10): ");
        scanf("%d", &i);
        i--;
        if (i>=0 && i<10)
        {
            printf("%s\n", text[i]);
        }
        
    } while (i >= 0);

    return 0;
}