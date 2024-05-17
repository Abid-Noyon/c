#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 26; j++)
            for (k = 0; k < 2; k++)
                printf("%c", 'A' + j);

    return 0;
}
/* The value of j is added to the ASCII code of 'A' (65).
The resulting value corresponds to a different uppercase letter in the ASCII table.
For example:
When j is 0, 'A' + j becomes 65 + 0 = 65, which is the ASCII code for 'A'.
When j is 1, 'A' + j becomes 65 + 1 = 66, which is the ASCII code for 'B'.
And so on, printing all uppercase letters from 'A' to 'Z'. */
//_printing_alphabet_3_times_letter_twice