// writing a program to convert a_string_to_uppercase_and_lowercase_using_pointers professionally
/* #include <stdio.h>
#include <ctype.h>
int main()
{
    char str[80], *p;
    int i;
    printf("Enter a string:");
    gets(str);

    p = str;
    while (*p)
    {
        *p = toupper(*p);
        p++;
    }
    printf("%s\n", str); // upercase

    p = str;
    while (*p)
    {
        *p = tolower(*p);
        p++;
    }
    printf("%s\n", str); // lowercase

    return 0;
}
 */

// practice 1

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[80], *p;
    int i;
    p = str;
    printf("Enter a string:");
    gets(str);
    while (*p)
    {
        *p = toupper(*p);
        p++;
    }
    // this while loop can be even better with the following code
    // while(*p)
    // {
    //     *p++ = toupper(*p);
    // }
    printf("%s\n", str); // upercase

    p = str; // reset the pointer

    while (*p)
    {
        *p = tolower(*p);
        p++;
    }
    printf("%s\n", str); // lowercase
    return 0;
}

//  this is not professional

/* #include <stdio.h>

int main(void)
{
    char str[80];
    int i;
    printf("Enter a string:");
    gets(str);
    for(i=0; str[i]; i++)
    {
        str[i]= toupper(str[i]);
    }
    printf("%s\n", str); // upercase

    for(i=0; str[i]; i++)
    {
        str[i]= tolower(str[i]);
    }
    printf("%s\n", str); // lowercase

    return 0;
} */