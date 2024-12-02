#include <stdio.h>

int main(void)
{
    int nProverb;
    char proverb[][255] = {
        "Health is wealth.",
        "Honesty is the best policy.",
        "Sun is the power.",
        "Moon loved by all.",
        "Empty vessels sound much."};
    printf("Enter the number of proverb: ");
    scanf("%d", &nProverb);
    for (int i = 0; i < nProverb; i++)
    {
        printf("%s\n", proverb[i]);
    }
    return 0;
}