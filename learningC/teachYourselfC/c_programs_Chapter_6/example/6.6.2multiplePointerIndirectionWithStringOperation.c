#include <stdio.h>

int main()
{
    char *p, **mp, str[80];
    p = str;
    mp = &p;

    printf("Enter your name: ");
    gets(*mp); // here single * is used cause gets and prrintf both functions both require a pointer to a string for their operation. as **mp is a pointer to p and p is a pointer to the string str. So, *mp is a pointer to the string str.
    printf("hi %s!", *mp); 

    return 0;
}