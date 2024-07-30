/* #include <stdio.h>

int main()
{
    char name[]= "Abid Noyon";
    int age = 22;

    printf("My name is %s.\n", name);
    printf("And I am %d years old.\n", age);
    return 0;
} */

// c program to read line of text character by character

/* #include <stdio.h>

int main(void)
{
    char name[30], ch;
    int i = 0;
    printf("Enter name: ");
    while (ch != '\n')
    {
        ch = getchar();
        name[i] = ch;

        i++;
    }
    name[i] = '\0';
    printf("Your name: %s", name);
    return 0;
} */

// call by value

/* #include <stdio.h>

void swapNum(int a, int b);

int main(void)
{
    int num1= 10, num2=30;
    printf("Before swapping num1 and num2: %d %d\n", num1,num2);
    swapNum(num1, num2);
    printf("after swapping num1 and num2: %d %d\n", num1,num2);
    return 0;
}
void swapNum(int a, int b)
{
    int temp;
    temp=a;
    a= b;
    b= temp;
} */

// call by reference
/* #include <stdio.h>

void swapNum(int *a, int *b);

int main(void)
{
    int num1 = 10, num2 = 30;
    printf("Before swapping num1 and num2: %d %d\n", num1, num2);
    swapNum(&num1, &num2);
    printf("after swapping num1 and num2: %d %d\n", num1, num2);
    return 0;
}
void swapNum(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
} */

// factorial using recursion

/* #include <stdio.h>

int factorial(int x);

int main(void)
{
    printf("factorial of 5: %d", factorial(5));
    return 0;
}
int factorial(int x)
{
    int fac = 1;
    if (x == 1)
        return 1;
    else
        fac = x * factorial(x - 1);
    return fac;
} */

// struct user defined data types

/* #include <stdio.h>

struct student
{
    char studentName[30];
    char studentAddress[30];
    int studentRoll[5];
    int studentClass [5];
};

int main(void)
{
    struct student stuData;
    printf("Enter student name: ");
    gets(stuData.studentName);
    printf("Enter student address: ");
    gets(stuData.studentAddress);
    printf("Enter student roll: ");
    scanf("%d", &stuData.studentRoll);

    printf("Student name: %s\n", stuData.studentName);
    printf("Student address: %s\n", stuData.studentAddress);
    printf("Student roll: %d\n", stuData.studentRoll);
    return 0;
} */

// malloc() usages

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("sorry! unable to allocate memory.");
        exit(0);
    }
    printf("ENter elemetns: ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("sum: %d\n", sum);
    free(ptr);

    return 0;
} */

/*
Here are some advantages of using a linked list over an array:

1. **Dynamic Size**: Linked lists can grow and shrink in size dynamically, allowing for efficient use of memory. Arrays have a fixed size, which can lead to wasted space or the need for resizing.

2. **Ease of Insertion/Deletion**: Inserting or deleting elements in a linked list is more efficient, especially for large datasets. In an array, these operations require shifting elements, which can be time-consuming.

3. **Memory Utilization**: Linked lists use memory more efficiently for large datasets because they do not require contiguous memory allocation. Arrays require a contiguous block of memory, which can be problematic for large arrays.

4. **No Wasted Space**: Linked lists do not have unused memory space, as each element is dynamically allocated. Arrays may have unused space if the allocated size is larger than the number of elements.

5. **Flexibility**: Linked lists provide more flexibility in terms of data structures, such as implementing stacks, queues, and other complex data structures.

However, it's important to note that linked lists also have some disadvantages, such as increased memory usage due to storage of pointers and potentially slower access times compared to arrays. */

// string palindrome check

/* #include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100], b[100];
    printf("Enter a string: ");
    gets(a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
    {
        printf("%s Palindrome.", a);
    }
    else
        printf("%s is Not Palindrome.", a);

    return 0;
} */

// factorial

/* #include <stdio.h>

int main(void)
{
    int num, i;
    long factorial=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        factorial*=i;
    }
    printf("Factorial of %d is: %ld\n", num, factorial);
    return 0;
} */

// quadratic equation

/* #include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, d;
    float r1, r2, r;
    printf("Enter values of a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = -b + sqrt(d) / (2 * a);
        r2 = -b - sqrt(d) / (2 * a);
        printf("Roots are: r1: %f and r2: %f", r1, r2);
    }
    else if ((d == 0))
    {
        r = -b / (2 * a);
    printf("Unique solution: %f", r);
    }
    else
    printf("roots are imaginary");
        return 0;
} */

// smallest
/* #include <stdio.h>

int main(void)
{
    int a, b,c;
    printf("ENter thre num: ");
    scanf("%d %d %d", &a, &b, &c);
    int smallest = a;
    if (b < smallest)
    {
        smallest = b;
    }

    if (c < smallest)
    {
        smallest = c;
    }
    printf("Smallest number is: %d", smallest);

    return 0;
} */

// leap year

/* #include <stdio.h>

int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year%400==0) || (year%4==0 && year%100!=0))
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    return 0;
} */

// Write a C program to check if a character is VOWEL or CONSONANT using a switch statement.

/* #include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch = tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.", ch);
        break;
    default:
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a consonant.", ch);
    }
    else
    {
        printf("Invalid input.");
    }
    }
    return 0;
} */

// Write a C program to determine the sum of the following series S=l+l/2+l/3+ +1/N
/* #include <stdio.h>

int main(void)
{
    int n = 50;
    double sum = 0.0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("Sum of the series: %lf", sum);
    return 0;
} */

// sum of the series ( S = 1^2 + 2^2 + 3^2 + \cdots + N^2 ):

/* #include <stdio.h>

int main(void)
{
    int i, n;
    double sum = 0.0;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = (n * (n + 1) * (2 * n + 1)) / 6;
    for(i=1; i<=n; i++)
    {
        // sum += i * i;
        if (i!=n)
        {
            printf("%d^2 + ", i);
        }
        else
        {
            printf("%d^2 = %lf", i, sum);
        }
        printf("\n sum of the series: %lf", sum);
    }
    return 0;
} */

// Write a C program to calculate the sum of the following series : 1 + 2 ^ 2 + 3 ^ 3 + 4 ^ 4 + 50 ^ 50

/* #include <stdio.h>
#include <math.h>

int main(void)
{
    int i, n=50;
    double sum = 0.0;
    for ( i = 1; i <= n; i++)
    {
        sum+=pow(i, i);
    }

    printf("Sum of the series: %lf", sum);
    return 0;
} */

// display integer in reverse order also compute sum

/* #include <stdio.h>

int main(void)
{
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        printf("%d", rem);
        sum+= rem;
        temp = temp / 10;
    }
    printf("Sum of the digits: %d = %d", num, sum);
    return 0;
} */

// gcd
/* #include <stdio.h>

int main(void)
{
    int n1, n2, temp, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    gcd = n1;
    printf("GCD: %d", gcd);
    return 0;
} */

// fibonacci

#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    printf("fibonacchi series of 5 \n");
    for (int i = 0; i <  5; i++)
    {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}