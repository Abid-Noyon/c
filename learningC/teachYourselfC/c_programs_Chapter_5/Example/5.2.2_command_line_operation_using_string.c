/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char command[80], temp[80];
    int i, j;

    for (;;)
    {
        printf("Operation? ");
        gets(command);

        // see if user wants to stop
        if (!strcmp(command, "quit"))
            break;

        printf("Enter the first number:");
        gets(temp);
        i = atoi(temp);

        printf("Enter the second number:");
        gets(temp);
        j = atoi(temp);

        // now perform the opetation
        if (!strcmp(command, "add"))
            printf("%d\n", i + j);
        else if (!strcmp(command, "struct"))
            printf("%d\n", i - j);
        else if (!strcmp(command, "divide"))
            printf("%d\n", i / j);
        else if (!strcmp(command, "multiply"))
            printf("%d\n", i * j);
        else
            printf("Unknown command\n");
    }

    return 0;
}
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char command[80], temp[80];
    float i, j;
    for (;;)
    {
        // taking operation input
        printf("\nOperation?: ");
        gets(command);
        if (!strcmp(command, "quit"))
        {
            break;
        }

        // taking number input
        printf("\nEnter first number: ");
        gets(temp);
        i = atof(temp); // converting string to integer
        printf("\nEnter second number: ");
        gets(temp);
        j = atof(temp);

        // now porforming operation
        if (!strcmp(command, "add"))
        {
            printf("\nAddition of %.5f and %.5f is: %.5f\n", i, j, (float)i + j);
        }
        else if (!strcmp(command, "struct"))
        {
            printf("\nStruct of %.5f and %.5f is: %.5f\n", i, j, (float)i - j);
        }
        else if (!strcmp(command, "multiply"))
        {
            printf("\nMultiplication of %.5f and %.5f is: %.5f\n", i, j, (float)i * j);
        }
        else if (!strcmp(command, "divide"))
        {
            if (!j)
            {
                printf("\nCant divide by zero.\n");
            }
            else
                printf("\nDivision of %.5f and %.5f is: %.5f\n", i, j, (float)i / j);
        }
        else
            printf("\nUnknown command.");
    }
    return 0;
}
//_command_line_operation_using_string