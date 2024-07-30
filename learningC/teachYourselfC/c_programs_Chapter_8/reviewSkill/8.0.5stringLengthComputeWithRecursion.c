#include <stdio.h>
int rstrlen(char *str);
int length;

int main(void)
{
    char name[] = "Abid Noyon ";
    printf("Length: %d", rstrlen(name));
    return 0;
}
int rstrlen(char *str)
{
    if (*str)
    {
        // str++; // you can use this line to increase address by one then you need to call recursion func just like rstrlen(str); 
        length++;
        rstrlen(str+1); //but here I increased the address on the function by adding 1. THis just decrease one line of code 
    }
    return length;
}

// this was a practise
// failed because I need to use a global variable for length
// if you find a better way please feel free to inform me.
/* #include <stdio.h>
int rstrlen(char *str);

int main(void)
{
    char name[] = "Abid Noyon";
    // rstrlen(name);
    printf("Length: %d", rstrlen(name));
    return 0;
}
int rstrlen(char *str)
{
    if (*str)
    {
        int length;
        str++;
        rstrlen(str);
        ++length;
        // printf("length: %d ", length);
        return length;
        // ++length;
        // while (*str)
        // {
        //     ++length;
        //     rstrlen(str + 1);
        // }
    }
    // else
    //     printf("length: %d ", length);
} */
