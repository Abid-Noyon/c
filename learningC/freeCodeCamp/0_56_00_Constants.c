#include <stdio.h>

int main()
{
    // const are that variables which values cant be modified
    // some people like const variable name in capital letter

    // const int NUM = 10;
    const int num = 10;
    printf("The num: %d\n", num);
    // num = 12; //what it says in compiler: assignment of read-only variable 'num'
    printf("The num: %d\n", num);
    return 0;
}

// 1_00_13_Getting_User_Input