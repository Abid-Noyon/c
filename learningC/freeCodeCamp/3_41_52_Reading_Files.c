/* #include <stdio.h>

int main()
{
    char line[255];
    FILE *fpointer = fopen("employees.txt", "r");
    fgets(line, 255, fpointer); // stores the first line of the file
    // to get access to second line use above statement again just like
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
    return 0;
} */

// _________________________________________________

/* // practice 1

#include <stdio.h>

int main()
{
    char line[255];
    FILE *messUsageP = fopen("MessUsage.txt", "r");
    // fgets(messUsageP, 255, line); Mistake i made before. correct code below
    fgets(line, 255, messUsageP);
    printf("%s", line);
    fclose(messUsageP);
    return 0;
}
// succesfully retrived data for practice 1 */