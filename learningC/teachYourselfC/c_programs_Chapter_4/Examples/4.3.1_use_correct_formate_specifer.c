#include <stdio.h>

int main()
{

    printf("%hd", 42340); // this is wrong the formate specifier thinks that its a short int but the number is out of thats range

    return 0;
}

//_use_correct_formate_specifer