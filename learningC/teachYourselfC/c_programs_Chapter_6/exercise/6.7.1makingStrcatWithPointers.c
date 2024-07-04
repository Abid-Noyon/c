// practice 1

#include <stdio.h>

void mystrcat(char *to, char *from);

int main(void)
{
    // Initialize two strings
    char str[90] = "I am";
    char str1[90] = " Abid Noyon";
    
    // Concatenate str1 to str
    mystrcat(str, str1);
    
    // Print the concatenated string
    printf("%s\n", str); // Updated to use format specifier for safety
    
    return 0;
}

void mystrcat(char *to, char *from)
{
    // Move to the end of the 'to' string
    while (*to)
        to++;
    
    // Copy 'from' string to the end of 'to' string
    while (*from)
        *to++ = *from++;
    
    // Null-terminate the concatenated string
    *to = '\0';
}

/* #include <stdio.h>

void mystrcat(char *to,char *from)
{
    while(*to)
        *to++;
    while(*from)
        *to++=*from++;

    *to='\0';
}

int main ()
{
    char str[]="this is";
    mystrcat(str,"a test");
    printf(str);

    return 0;
} */