#include <stdio.h>

int main(void)
{
    char str[80];
    printf("Enter strings: ");
    scanf("%*d"); // this to read and discard any leading digits.
    scanf("%[a-zA-Z ]", str);
    printf(str);
    return 0;
}