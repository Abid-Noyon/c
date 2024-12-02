#include <stdio.h>

int main(void)
{
    char str[80];
    printf("Enter letters, anything else to stop\n");
    scanf("%[a-zA-Z]", str); // scanf() stops when space is entered
    // scanf("%[^a-zA-Z]", str); // give a sign of ^ hat to exclude those
    printf(str);
    return 0;
}