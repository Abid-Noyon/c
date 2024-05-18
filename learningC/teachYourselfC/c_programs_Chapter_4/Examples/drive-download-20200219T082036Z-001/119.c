#include<stdio.h>

float soundspeed(float c);

int main()
{
   float s,a;
    printf("Input distence in feet");
    scanf("%f",&a);

   s = soundspeed(a);

   printf("your time is %f second ",s);

return 0;
}

float soundspeed(float c)
{
    float b;

    b = c/1129;

return b;
}
