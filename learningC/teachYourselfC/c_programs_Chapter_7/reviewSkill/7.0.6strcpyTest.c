#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[8];
    strcpy(str, "ABCDEFG");
    printf("%c", *(str+2)); //print the third element form the character array
    return 0;
}