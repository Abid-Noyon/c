//_calculating_years_into_seconds
#include <stdio.h>
void main(void)
{
    unsigned long long int seconds;
    seconds = 365 * 24 * 60 * 60; // 1 year to seconds calculation
    printf("Seconds in a year: %llu", &seconds);
}
