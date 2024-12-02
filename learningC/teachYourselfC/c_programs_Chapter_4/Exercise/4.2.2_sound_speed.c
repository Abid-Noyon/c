// version 2 with parameter

#include <stdio.h>
float soundSpeed(float distance);
int main()
{
    printf("For 1129 feet time needed: %.2f", soundSpeed(5645));
    return 0;
}
float soundSpeed(float distance)
{
    float time;
    time = distance / 1129;
    return time;
}

/* #include <stdio.h>

float soundspeed(float a, float b);

int main()
{
    float s;

    // s = soundspeed();

    printf("your time is %f second ", s);

    return 0;
}

float soundspeed(float a, float b)
{
    printf("Input distence in feet: ");
    scanf("%F", &a);

    b = a / 1129;

    return b;
} */

//_sound_speed

// version 1 without parameter

/* #include <stdio.h>
float soundSpeed();
int main()
{
    soundSpeed();
    return 0;
}
float soundSpeed()
{
    float distance, time;
    printf("Enter distancce in feet: ");
    scanf("%f", &distance);
    time = distance / 1129;
    printf("\n%.2f sec needed.\n", time);
} */
