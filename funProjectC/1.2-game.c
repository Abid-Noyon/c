#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nGuesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // random number betweern 1 to 100
    // printf("The number is %d.\n", number);
    // keep running  the loop until the number is guessed.
    do
    {
        printf("Guess the NUMBER which I have in my mind between 1 to 100. Let's start-->\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please.\n");
        }
        else if (guess < number)
        {
            printf("Higer number please.\n");
        }
        else
        {
            printf("Yes, You guessed it at %d attempt.", nGuesses);
        }
        nGuesses++;
    } while (guess != number);
  
    return 0;
}