// let me find out the solution
#include <stdio.h>

int main(void)
{
    // char *name[9][2] = {
    //     "1", "Abid",
    //     "2", "B",
    //     "3", "Cd",
    //     "4", "D",
    //     "5", "E",
    //     "6", "E",
    //     "7", "G",
    //     "8", "H",
    //     "9", "I"};

    char *name[9][2];
    double btAvg[9];
    int i, j;
    printf("Enter first name and batting avereage: ");
    for (i = 0; i < 9; i++)
    {
        *name[i][0] = i + 1;
        scanf("%s", name[i][1]);
    }
    for (i = 0; i < 9; i++)
    {
        printf("%d\t", *name[i][0]);
        printf("%s\n", *name[i][1]);
    }

    return 0;
}