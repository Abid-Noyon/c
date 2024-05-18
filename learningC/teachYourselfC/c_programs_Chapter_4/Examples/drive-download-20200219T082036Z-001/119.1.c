#include<stdio.h>

float soundspeed();

int main()
{
    float p;

    p = soundspeed();

    printf("The time is %f second",p);

return 0;
}

float soundspeed()
{
    int s,d;

    printf("Input distence as feet");
    scanf("%f",&s);

    d = s/1129;

    return d;
}
