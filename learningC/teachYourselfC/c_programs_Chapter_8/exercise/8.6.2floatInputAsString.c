#include <stdio.h>

int main(void)
{
    char flaotStr[20];
    printf("Enter a float: ");
    scanf("%20[0123456789.]", flaotStr);
    printf(flaotStr);
    return 0;
}