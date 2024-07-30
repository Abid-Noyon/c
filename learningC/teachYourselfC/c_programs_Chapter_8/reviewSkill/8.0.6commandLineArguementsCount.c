#include <stdio.h>

int main(int argc, char *argv[])
{
    // int n = argc-1;
    printf("There are %d command line.\n", argc);
    printf("The last command contents: ");
    printf(argv[argc - 1]);
    return 0;
}