/* This program converts Earths days into Jovian Years */

#include <stdio.h>

int main(void)
{
    float eDays; // number of earth days
    float jDays; // equivalent number of jovian years

    // get number of Earth days
    printf("Enter earth days: ");
    scanf("%f", &eDays);
    jDays = eDays / (365 * 11.86); // 1 jovian year is 11.86 year on earth
    printf("Equivalent jovian days: %f", jDays);
    return 0;
}