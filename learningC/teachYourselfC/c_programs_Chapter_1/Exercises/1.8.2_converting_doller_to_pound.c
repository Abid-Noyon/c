//_converting_doller_to_pound
/* #include <stdio.h>
float convert(float p);

int main()
{
    float dollar,pound;
    printf("Enter the amount in dollar:");
    scanf("%f",&dollar);
    pound=convert(dollar);
    printf("The amount in pound is:%.2f",pound);
    return 0;

}

float convert(float p)
{
    return p/2;
}
 */

// ________________________________________________________________

#include <stdio.h>

float convert(float d);

int main()
{
    float doller, pound;
    printf("Enter amount in doller: ");
    scanf("%f", &doller);
    pound = convert(doller);
    printf("Amount in pound is: %.2f", pound);
    return 0;
}
float convert(float d)
{
    return d/2;
}