/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("You must specify the operation");
        printf("Followed by two numbers");
        exit(1);
    }
    if (!strcmp("add", argv[1]))
        printf("%f", atof(argv[2]) + atof(argv[3]));
    else if (!strcmp("subtract", argv[1]))
        printf("%f", atof(argv[2]) - atof(argv[3]));
    if (!strcmp("multiply", argv[1]))
        printf("%f", atof(argv[2]) * atof(argv[3]));
    if (!strcmp("divide", argv[1]))
        printf("%f", atof(argv[2]) / atof(argv[3]));
    return 0;
}
 */

// i want to improve the divition cant be by 0 part
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("You must specify the operation");
        printf("Followed by two numbers");
        exit(1);
    }
    if (!strcmp("add", argv[1]))
        printf("%f", atof(argv[2]) + atof(argv[3]));
    else if (!strcmp("subtract", argv[1]))
        printf("%f", atof(argv[2]) - atof(argv[3]));
    if (!strcmp("multiply", argv[1]))
        printf("%f", atof(argv[2]) * atof(argv[3]));
    if (!strcmp("divide", argv[1]))
    {
        if(atof(argv[3])==0)
        {
            printf("Cant divide by zero.\n");
        }
        else
        printf("%f", atof(argv[2]) / atof(argv[3]));
    }
    return 0;
}
