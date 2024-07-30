/* #include <stdio.h>

void print(char *c);

int main(void)
{
    char st[] = "Abid Noyon";
    print(st);
}

void print(char *c)
{
    if (*c)
    {
        if (*c==' ') // i added this condition to remove or eliminate actual space that are printed twice, if you dont want remove this condition
        {
            c++;
        }
        printf("%c ", *c);
        
        print(c + 1);
    }
} */

// practise

#include <stdio.h>
void singleChar(char *str);
int main(void)
{
    char name[]="Abid Noyon";
    singleChar(name);
    return 0;
}
void singleChar(char *str)
{
    if (*str)
    {
        if (*str==' ')
        {
            str++;
        }
        
        printf("%c ", *str);
        singleChar(str+1);
    }
    
}