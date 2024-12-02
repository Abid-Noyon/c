#include <stdio.h>
void main(void)
{
    int a, b, c, volume;
    printf("Enter length:");
    scanf("%d", &a);
    printf("Enter heigth:");
    scanf("%d", &b);
    printf("Enter width:");
    scanf("%d", &c);
    volume = a * b * c;
    printf("Volume is: %d", volume);
}

//_volume_of_a_cube