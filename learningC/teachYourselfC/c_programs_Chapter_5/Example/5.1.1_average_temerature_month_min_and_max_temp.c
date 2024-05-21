/* #include <stdio.h>

int main(void)
{
    int temp[31], i, min, max, avg;
    int days;

    printf("How many days in the month?: ");
    scanf("%d", &days);

    for (i = 0; i < days; i++)
    {
        printf("Enter monday tempareture for day %d: ", i + 1);
        scanf("%d", &temp[i]);
    }

    avg = 0;
    for (i = 0; i < days; i++)
        avg = avg + temp[i];
    printf("Average temprature is %d\n", avg / days);

    // find min max

    min = 200;
    max = 0;
    for (i = 0; i < days; i++)
    {
        if (min > temp[i])
            min = temp[i];
        if (max < temp[i])
            max = temp[i];
    }

    printf("Minimum temparatre %d\n", min);
    printf("Maxmimum temparature %d\n", max);

    return 0;
} */
//_average_temerature_month_min_and_max_temp
// version 2
#include <stdio.h>

int main(void)
{
    int days, avgTemp, minTemp, maxTemp, i;
    int temp[31];
    printf("Enter how many days of that month: ");
    scanf("%d", &days);
    // taking noonday temp for each day and store in array
    for (i = 0; i < days; i++)
    {
        printf("Enter noonday temperature for day %d: ", i + 1);
        scanf("%d", &temp[i]);
    }

    // calculating avg temp
    avgTemp = 0;
    for (i = 0; i < days; i++)
    {
        avgTemp += temp[i];
    }
    // lets fix avg temp showing in int by type cast
    printf("\nAverage temperature of that month is: %.2f", (float)avgTemp / days);

    // finding min and max temp
    minTemp = 200;
    maxTemp = 0;

    // min temp
    for (i = 0; i < days; i++)
    {
        if (minTemp > temp[i])
        {
            minTemp = temp[i];
        }
    }
    // max temp
    for (i = 0; i < days; i++)
    {
        if (maxTemp < temp[i])
        {
            maxTemp = temp[i];
        }
    }

    printf("\nThe minimun temperature of the day is: %d", minTemp);
    printf("\nThe maximun temperature of the day is: %d", maxTemp);
    return 0;
}