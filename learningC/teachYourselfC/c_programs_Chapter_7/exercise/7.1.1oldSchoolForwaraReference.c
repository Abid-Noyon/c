#include <stdio.h>

double avg(); // old school forward reference

int main()
{
    float average;
    average = avg();
    printf("Average: %f", average);
    return 0;
}

double avg()
{
    float num, sum = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%f", &num);
        // sum = sum + num;
        sum+=num;
    }
    return sum / 10;
}