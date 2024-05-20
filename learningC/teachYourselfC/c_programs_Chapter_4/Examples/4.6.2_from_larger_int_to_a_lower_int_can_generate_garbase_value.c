#include <stdio.h>

int main()
{
    short int si;
    long int li;
    li = 100000;
    si = li; // as si cant hold more than 32767 so is converts lower order 16 bits of li into si
    printf("%hd", si);
    return 0;
}

//_from_larger_int_to_a_lower_int_can_generate_garbase_value