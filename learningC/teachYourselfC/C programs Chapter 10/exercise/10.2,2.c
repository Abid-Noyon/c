#include<stdio.h>
#include<time.h>

int main ()
{
    struct tm *systime, *gmt;
    time_t t;
    t=time(NULL);
    systime=localtime(&t);
    printf("Time is %.2d:%.2d:%.2d\n",systime->tm_hour, systime->tm_min, systime->tm_sec);
    gmt=gmtime(&t);
    printf("Coordinated Universal Time is %.2d:%.2d:%.2d\n",gmt->tm_hour, gmt->tm_min, gmt->tm_sec);
    printf("Date %.2d/%.2d/%.2d\n",systime->tm_mon+1, systime->tm_mday, systime->tm_year);
    
    return 0;
}