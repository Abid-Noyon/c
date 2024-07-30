// this program is correct and  can be made better, below
/* #include <stdio.h>
double myfunc();
int main(void)
{
    printf("%f", myfunc(10.2));
    return 0;
}
double myfunc(double num)
{
    return num / 2;
} */

// better version
#include <stdio.h>
double myfunc(double num); // now this protype declares it can have a double and definition also says that
int main(void)
{
    printf("%f", myfunc(10.2));
    return 0;
}
double myfunc(double num)
{
    return num / 2;
}