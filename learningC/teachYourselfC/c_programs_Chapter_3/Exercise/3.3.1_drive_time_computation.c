#include <stdio.h>
int main()
{
    float dist, speed;
    int num;

    printf("Enter number of drive time computation");
    scanf("%d", &num);

    for (; num; num--)
    {
        printf("\nEnter distence:");
        scanf("%f", &dist);

        printf("Enter average speed");
        scanf("%f", &speed);

        printf("Drive time is=%f\n", dist / speed);
    }
    return 0;
}

//_drive_time_computation
/* #include <stdio.h>

int main()
{
    int num_computations, i;
    float distance, speed, drive_time;

    printf("Enter the number of driving time computations you want to perform: ");
    scanf("%d", &num_computations);

    for (i = 1; i <= num_computations; i++)
    {
        printf("\nComputation %d:\n", i);

        printf("Enter the distance (in kilometers): ");
        scanf("%f", &distance);

        printf("Enter the average speed (in kilometers per hour): ");
        scanf("%f", &speed);

        if (speed <= 0)
        {
            printf("Error: Average speed cannot be zero or negative.\n");
        }
        else
        {
            drive_time = distance / speed;
            printf("Driving time: %.2f hours\n", drive_time);
        }
    }

    return 0;
}
 */