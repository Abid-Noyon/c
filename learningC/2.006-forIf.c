#include <stdio.h>

int main(void)
{
    int count, anwser;
    for (count = 1; count < 11; count++)
    {
        printf("what is %d + %d: ", count, count);
        scanf("%d", &anwser);
        if (anwser == count + count)
        {
            printf("Yes! Right.\n");
        }
        else
        {
            printf("Wrong! the right answer is: %d\n", count + count);
        }
    }

    return 0;
}