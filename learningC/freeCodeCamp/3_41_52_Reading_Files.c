#include <stdio.h>

int main()
{
    char line[255];
    FILE *fpointer = fopen("employees.txt", "r");
    fgets(line, 255, fpointer); // stores the first line of the file
    // to get access to second line use above statement again just like
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
    return 0;
}