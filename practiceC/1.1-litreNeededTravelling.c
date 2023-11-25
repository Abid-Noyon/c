#include <stdio.h>
int main(void)
{
    double timeHour, avgSpeed, litreNeeded;
    printf("Enter hours of travelling and average speed in km/h: ");
    scanf("%lf %lf", &timeHour, &avgSpeed);
    litreNeeded = (avgSpeed * timeHour) / 12;
    printf("\n%.3lf Litre Needed.", litreNeeded);
}