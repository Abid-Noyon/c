// 3.4.3_valid_for_loop.c


#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    ch = 'x';
    for (; ch != ' ';)
    {
        ch = getche();
    }

    return 0;
}

// Yes, the code is syntactically a valid for loop in C. It has the following general structure: