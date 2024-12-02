// fragment 3
/* #include <stdio.h>
// #define STR this is a test
// previous line is not correct as string there should be "" like below
#define STR "this is a test"

int main(void)
{
    printf(STR);
    return 0;
} */

// fracment 4

#define STDIO <stdio.h>
#include STDIO
// works perfectly

int main(void)
{
    printf("THis is a test.");
    return 0;
}