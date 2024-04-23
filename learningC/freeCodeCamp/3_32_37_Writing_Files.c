#include <stdio.h>
#include <stdlib.h>

int main()
{
    // FILE *fpointer = fopen("employees.txt", "w");
    // fprintf(fpointer, "hello!");
    // with w mode if file not exists it will create and everything will be overwritten
    // fprintf(fpointer, "Overwritten  ");
    // to write after existence text use a mode
    FILE *fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "\nI am Abid.");

    fclose(fpointer);
    return 0;
}
// 3_41_52_Reading_Files