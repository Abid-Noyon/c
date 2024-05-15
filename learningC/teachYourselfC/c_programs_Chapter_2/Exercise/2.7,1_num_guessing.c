/* #include <stdio.h>

int main()
{
    int a, b, count;
    a = 5;
    for (count = 0; count < 10; count++)
    {
        printf("Guess a number between 0 to 10:");
        scanf("%d", &b);
        if (b == a)
        {
            printf("Right!");
            break;
        }
        else if (b < a)
            printf("Your estimation is less");
        else
            printf("Your estimation is more");
    }
} */

#include <stdio.h>

int main(void)
{
    int num, guessNum = 6, tries = 1;

    for (int i = 0; i <= 10; i++)
    {
        printf("Guess the magic number between 0-10: \n");
        // printf("Enter the number: ");
        scanf("%d", &num);
        if (num == guessNum)
        {
            printf("\nRight!");
            printf("\nYou have guessed is in %d tries.", tries);
            break;
        }
        else if (num > guessNum)
        {
            printf("\nThe magic number is less than you entered.\n");
        }
        else
        {
            printf("\nThe magic number is bigger than you entered.\n");
        }
        ++tries;
    }

    return 0;
}

//_num_guessing