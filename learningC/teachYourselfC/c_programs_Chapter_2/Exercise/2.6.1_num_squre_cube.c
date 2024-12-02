/* #include <stdio.h>
int main (void)
{
    int i;
    printf ("number\t\tit's square\tit's cube\n") ;
    for(i=1;i<=10;i++)
    {
        printf("%d\t\t%d\t\t%d",i,i*i,i*i*i);
        printf("\n");
    }

    return 0;
}     */

#include <stdio.h>

int main(void)
{
    int i;
    printf("Number\t Square\t Cube\t\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t %d\t %d\t\n", i, i * i, i * i * i);
    }

    return 0;
}

//_num_squre_cube