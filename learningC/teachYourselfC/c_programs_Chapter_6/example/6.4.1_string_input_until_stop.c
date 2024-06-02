// Date: 2024/06/02
// Created by: Abid Noyon
// takes a string from the user and continues to do so until the user enters the string "stop"
//_string_input_until_stop
#include <stdio.h>
#include <string.h>

int main()
{
    char *p = "stop";
    char str[80];

    do
    {
        printf("Enter a string:");
        gets(str);
    } while (strcmp(p, str));

    return 0;
}