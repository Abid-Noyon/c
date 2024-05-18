/* #include <stdio.h>

int main()
{
    int n1 = 10, n2 = 15;
    char ch;

    do
    {
        printf("Load,Save,Edit,Quit?\n");

        do
        {
            printf("Enter your selection:");
            ch = getchar();

        } while (ch != 'L' && ch != 'S' && ch != 'E' && ch != 'Q');

        if (ch != 'Q')
        {
            printf("%d+%d=%d", n1, n2, n1 + n2);
        }
        if (ch != 'Q')
        {
            printf("%d-%d=%d", n1, n2, n1 - n2);
        }

    } while (ch != 'Q');
}
 */
//_perform_by_entry_letter