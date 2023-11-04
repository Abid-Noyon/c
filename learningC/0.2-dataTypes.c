#include <stdio.h>

int main() {
    int myInteger = 42;
    float myFloat = 3.14;
    double myDouble = 3.14159265359;
    char myChar = 'A';
    _Bool myBool = 1;
    short int myShort = 100;
    long int myLong = 1000000L;
    long long int myVeryLong = 100000000000LL;
    unsigned int myUnsigned = 50;
    unsigned char myUnsignedChar = 'B';
    unsigned long myUnsignedLong = 2000000UL;
    unsigned long long myUnsignedVeryLong = 200000000000ULL;

    printf("Integer: %d\n", myInteger);
    printf("Float: %f\n", myFloat);
    printf("Double: %lf\n", myDouble);
    printf("Char: %c\n", myChar);
    printf("Boolean: %d\n", myBool);
    printf("Short Integer: %d\n", myShort);
    printf("Long Integer: %ld\n", myLong);
    printf("Very Long Integer: %lld\n", myVeryLong);
    printf("Unsigned Integer: %u\n", myUnsigned);
    printf("Unsigned Char: %c\n", myUnsignedChar);
    printf("Unsigned Long: %lu\n", myUnsignedLong);
    printf("Unsigned Very Long: %llu\n", myUnsignedVeryLong);

    return 0;
}