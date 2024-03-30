/* This program converts Earths days into Jovian Years */

/* #include <stdio.h>

int main(void)
{
    float eDays; // number of earth days
    float jYears; // equivalent number of jovian years

    // get number of Earth days
    printf("Enter earth days: ");
    scanf("%f", &eDays);
    jYears = eDays / (365 * 11.86); // 1 jovian year is 11.86 year on earth
    printf("Equivalent jovian years: %f", jYears);
    return 0;
} */

#include <stdio.h>

int main()
{
    // Define the number of Earth days in a Jovian year
    const double jovianYearInEarthDays = 4332.59;

    // Variable to store the number of Earth days
    double earthDays;

    // Ask the user for the number of Earth days
    printf("Enter the number of Earth days: ");
    scanf("%lf", &earthDays);

    // Convert Earth days to Jovian years
    double jovianYears = earthDays / jovianYearInEarthDays;

    // Output the result
    printf("%.2f Earth days is equivalent to %.5f Jovian years.\n", earthDays, jovianYears);

    return 0;
}
