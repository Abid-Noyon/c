#include <stdio.h> // Include the standard input/output library

int main() // The main function, the entry point of the program
{
    float *fp, **mfp, val; // Declare variables: fp is a pointer to a float, mfp is a pointer to a pointer to a float, val is a float

    fp = &val; // Assign the address of val to fp
    mfp = &fp; // Assign the address of fp to mfp

    **mfp = 123.903; // Assign the value 123.903 to the variable pointed to by the pointer pointed to by mfp

    printf("%f %f", val, **mfp); // Print the values of val and the variable pointed to by the pointer pointed to by mfp

    return 0; // Return 0 to indicate successful program execution
}