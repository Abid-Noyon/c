#include <stdio.h>  // Including the standard input/output library.

int main(void)
{
    char *pArrayString[] = {  // Declaring an array of character pointers.
        "out of disk",  // Initializing the first element of the array.
        "Cant open file",  // Initializing the second element of the array.
        "you dont have access to this folder"  // Initializing the third element of the array.
    };
    pArrayString[1] = "Out of disk space";  // Modifying the value of the second element.
    printf("%s\n", pArrayString[1]);  // Printing the modified value.
    printf("%s\n", pArrayString[2]);  // Printing the third element.
    return 0;  // Returning 0 to indicate successful execution.
}