// creating an if statement to find the max number of two
#include <stdio.h>

int max(int num1, int num2, int num3); // so to find max of 3 th e function will be changed a little

int main()
{

    printf("%d", max(5, 7, 8));
    return 0;
}

int max(int num1, int num2, int num3)
{
    int result;
    if(num1>= num2 && num1>= num3)
    {
        result =num1;
    }
    else if(num2>=num1 && num2>= num3) // && operator is used to make sure both the conditions is true  
    {
        result = num2;
    }
    else
    {
        result =num3;
    }
}
// 2_07_11_Building_a_Better_Calculator