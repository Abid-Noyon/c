#include <stdio.h>

int main(void)
{
    int countRight = 0, countWrong = 0, countRTry = 0, answer;
    for (int i = 1; i <= 10; i++)
    {
        printf("What is: %d + %d: ", i, i);
        scanf("%d", &answer);
        if (answer == i + i)
        {
            printf("Right!\n");
            countRight++;
        }
        else
        {
            printf("oh no! It's wrong. Try again: \n");
            scanf("%d", &answer);
            countWrong++;
            if (answer == i + i)
            {
                printf("Right!\n");
                countRTry++;
            }
            else
            {
                printf("Its wrong! the right answer is: %d\n", i + i);
            }
        }
    }
    printf("\nRight answer: %d", countRight);
    printf("\nRight answer on second try: %d", countRTry);
    printf("\nWrong answer: %d", countWrong);

    return 0;
}