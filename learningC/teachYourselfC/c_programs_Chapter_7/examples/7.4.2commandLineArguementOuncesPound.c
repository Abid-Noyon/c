#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    double pounds;
    pounds = atof(argv[1]) / 16.0;
    printf("%f pounds", pounds);
    return 0;
}

// this is a test program 

/* #include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Program name: %s\n", argv[0]);
    if (argc == 2)
    {
        printf("The arguement supplied is %s\n", argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguements supplied.\n");
    }
    else
    {
        printf("One arguement expected.\n");
    }
} */