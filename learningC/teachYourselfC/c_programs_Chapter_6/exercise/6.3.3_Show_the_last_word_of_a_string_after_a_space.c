// Date: 2021-08-20
// Created by: Abid Noyon
//_Show_the_last_word_of_a_string_after_a_space
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[80], *p;
    int i;

    printf("Enter a string:");
    gets(str);

    p=str;
    while(*p && *p!=' ') p++;

        printf(p);

    return 0;
}

/* #include <stdio.h>

int main()
{
    int count[10];
    count = count +2;
    return 0;
} */
// This will give an error: assignment of read-only location 'count' because count is an array and it is a constant pointer to the first element of the array

/* #include <stdio.h>

int main()
{
    int temp[5] = {1, 2, 3, 4, 5};
    int *p;
    p = temp;
    printf("%d", *(p + 3)); // this will increment the pointer by 3 and print the value at that location which is 4
    return 0; 
} */