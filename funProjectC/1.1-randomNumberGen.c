#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // random number betweern 1-100
    printf("The number is %d.", number);
    // keep running  the loop until the number is gussed.
    return 0;
}