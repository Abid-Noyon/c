#include <stdio.h>

double volume(double s1, double s2, double s3);
// double volume(); //this forword declaration still works but this is an old school method. and if we use this and pass some different data types arguements or incase of missing arguements then compiler cant catch the wrong because it has not given info about volume()'s parameters

int main()
{
    double vol;
    vol = volume(12.2, 5.67, 9.03);
    // vol = volume(12.2, 5.67, 9.03, 10.5); // this will cause an error as function protyped to have 3 arguements max. uncomment and compile with this line to see the error
    // vol = volume(12.2, 5.67); compiler will not generate any error when used with double volume(); this forward declaration

    printf("volume %f", vol);
    return 0;
}

double volume(double s1, double s2, double s3)
{
    return s1 * s2 * s3;
}