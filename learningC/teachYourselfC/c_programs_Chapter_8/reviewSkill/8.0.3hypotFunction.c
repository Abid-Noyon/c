#include <stdio.h>
#include <math.h>
double hypot(double arm1, double arm2);

int main(void)
{
    printf("Hypo: %lf", hypot(3.0, 4.0));
    return 0;
}
double hypot(double arm1, double arm2)
{
    return sqrt((arm1 * arm1) + (arm2 * arm2));
}