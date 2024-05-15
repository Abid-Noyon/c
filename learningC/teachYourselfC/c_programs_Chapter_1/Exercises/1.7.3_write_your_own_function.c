/* what happens when removing prototpyes */
#include <stdio.h>
/* void quote1(void);
void quote2(void);
 */
int main(void)
{
    quote1();
    quote2();
    return 0;
}

void quote1(void)
{
    printf("Early bard, ");
}
void quote2(void)
{
    printf("cathes the warm.");
}

//_write_your_own_function