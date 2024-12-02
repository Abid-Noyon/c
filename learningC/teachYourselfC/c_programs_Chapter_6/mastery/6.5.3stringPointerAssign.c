/* #include <stdio.h>

int main(void)
{
    char *p;
    printf("Enter a string: ");
    gets(p);
    printf(p);

    return 0;
} */

// version 2
/* #include <stdio.h>

int main(void)
{
    char a[90];
    char *p = a;
    printf("Enter a string: ");
    gets(p);
    printf(p);

    return 0;
} */

// practicing 1
#include <stdio.h>

int main(void)
{
    // char a[90];
    // char *p = a;
    char a[90], *p; // declaring char array and pointer in a line
    p = a; // assigning array address to pointer 
    printf("Enter a string: ");
    gets(p);
    printf(p);

    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    char p[100];
    printf("Enter a string: ");
    fgets(p, sizeof(p), stdin);
    printf("%s", p);

    return 0;
}

// version 2
#include <stdio.h>

int main(void)
{
    char a[90];
    char *p = a;
    printf("Enter a string: ");
    fgets(p, sizeof(a), stdin);
    printf("%s", p);

    return 0;
}

 */