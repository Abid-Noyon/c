/* #include <stdio.h>

// simple guessing game

int main()
{
    int secNum = 5;
    int guess;
    while (guess != secNum)
    {
        printf("Enter THe secret number: ");
        scanf("%d", &guess);
    }

    printf("you win!");

    return 0;
} */

// to make it guess with limited guess to make the game little difficult

#include <stdio.h>

// simple guessing game

int main()
{
    int secNum = 5;
    int guess;
    int guesscount = 0;
    int guessLimit = 3;
    int outOfGuess = 0;
    while (guess != secNum && outOfGuess == 0)
    {
        if (guesscount < guessLimit)
        {
            printf("Enter THe secret number: ");
            scanf("%d", &guess);
            guesscount++;
        }
        else
        {
            outOfGuess = 1;
        }
    }

    if (outOfGuess == 1)
    {
        printf("out of guess.");
    }
    else
    {
        printf("you win!");
    }

    return 0;
}

// 2_50_11_For_Loops