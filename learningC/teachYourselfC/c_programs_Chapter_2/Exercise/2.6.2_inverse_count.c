/* #include <stdio.h>
int main (void)
{
    int a,i;
    printf ("Enter an integer:") ;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d",a-i);
        printf("\n");
        if((a-i) == 0) printf("\a");
    }

    return 0;
}     */

// __________________
#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter an integer to start count from: ");
    scanf("%d", &num);
    for (i = num; i >= 0; i--)
    {
        printf("%d\n", i);
        if (i == 0)
        {
            printf("\a");
        }
    }

    return 0;
}

//_inverse_count