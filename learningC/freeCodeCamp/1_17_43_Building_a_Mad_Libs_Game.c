#include <stdio.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color);
    // getchar();
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    // getchar();
    printf("Enter a celebrity: ");
    // scanf("%s", celebrity);
    fgets(celebrity, 20, stdin);

    printf("\nRoses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s \n", celebrity);
    return 0;
}

// 1_26_29_Arrays