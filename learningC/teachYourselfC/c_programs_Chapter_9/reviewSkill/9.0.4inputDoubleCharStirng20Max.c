#include <stdio.h>
#include <conio.h>

int main(void)
{
    double d;
    char Ch;
    char str[21];

    printf("Enter a double: ");
    scanf("%lf", &d);
    getchar();
    printf("Enter a character: ");
    scanf("%c", &Ch);
    getchar();
    printf("Enter a string not more than 20 char: ");
    fgets(str, 20, stdin);
    // scanf("%20s", str);

    printf("%lf\n", d);
    printf("%c\n", Ch);
    printf(str);

    return 0;
}