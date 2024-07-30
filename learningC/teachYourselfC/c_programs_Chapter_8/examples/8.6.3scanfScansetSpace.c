#include <stdio.h>

int main(void)
{
    char str[4];
    printf("Enter letters, anything else to stop\n");
    scanf("%10[a-zA-Z ]", str); // scanf() stops when space is entered so give a space in the scanset
    printf(str);
    return 0;
}