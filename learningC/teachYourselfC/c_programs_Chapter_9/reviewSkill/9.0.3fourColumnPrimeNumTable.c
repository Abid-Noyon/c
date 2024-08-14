/* // let me find out more effective way
#include <stdio.h>

int main(void)
{
    int i, j, k = 0, prime;
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
            printf("%-8d ", i);
            ++k;
            if (k % 4 == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
} */

// practice 1; 1 August, 24
/* #include <stdio.h>

int main(void)
{
    int i, j, k = 0, prime;
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
            printf("%-8d", i);
            k++;
            if (!(k % 4))
            {
                printf("\n");
            }
        }
    }
    return 0;
} */

// practice 2
// writing prime number table in 4 alinged column of 2-1000

#include <stdio.h>

int main(void)
{
    int i, j, k = 0, prime; // i, j for loop and k for aligning items check line 82 for details
    for (i = 2; i < 1000; i++)
    {
        prime = 1;
        for (j = 2; j <= i / 2; j++) // see the loop will not run for 2 and 3 and prime seted to 1 and it prints as prime but for i=4 & j=2 this loop runs and and checks condition and set prime to 0. after that for i=5 the loop not satisfies condition and skipped
        {
            if (!(i % j))
            {
                prime = 0;
            }
        }
        if (prime)
        {
            printf("%-8d ", i);
            k++;
            if (!(k % 4))
            {
                printf("\n");
            }
        }
    }

    return 0;
}
