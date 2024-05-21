/* #include <stdio.h>
#include <conio.h>

int main()
{
    char mess[80];
    int i;

    printf("Enter message (less than 80 characters): \n");
    for (i = 0; i < 80; i++)
    {
        mess[i] = getche();
        if (mess[i] == '\r')
            break;
    }
    printf("\n");

    for (i = 0; mess[i] != '\r'; i++)
        printf("%c", mess[i] + 1);

    return 0;
}
 */

// version 2

#include <stdio.h>
#include <conio.h>

int main(void)
{
    char msg[80];
    int i;
    printf("Enter your messgae(less than 80 character): \n");
    for (i = 0; i < 80; i++)
    {
        msg[i] = getche();
        if (msg[i] == '\r')
        {
            break;
        }
    }
    printf("\n");
    for (i = 0; msg[i] != '\r'; i++)
    {
        printf("%c", msg[i] + 1);
    }

    return 0;
}
//_message_code_cipher_encoded