/* #include <stdio.h>
int main()
{
    int i, j, prime;

    for (i = 2; i < 1000; i++)
    {
        prime = 1;
        for (j = 2; j <= i / 2; j++)
            if (!(i % j))
                prime = 0;
        if (prime)
            printf("%d is prime.\n", i);
    }

    return 0;
}
 */
#include <stdio.h>

int main()
{
    int i, j, prime;
    for (i = 2; i < 1000; i++)
    {
        prime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (!(i % j))
            {
                prime = 0;
            }
        }
        if (prime)
        {
            printf("%d is prime.\n", i);
        }
    }
    return 0;
}
//_prime_number_upto_1000