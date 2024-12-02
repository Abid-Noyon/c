#include <stdio.h>

int main()
{
    unsigned long int distance, time;
    printf("Input distance distence (in mile): ");
    scanf("%lu", &distance);

    time = distance / 186000;

    printf("Time needed: %d sec.", time);
    return 0;
}

//_light_distance_travel