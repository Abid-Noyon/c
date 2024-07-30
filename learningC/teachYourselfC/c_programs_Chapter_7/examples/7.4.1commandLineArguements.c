// this program works like: after you compile this program and there should be an exe file genarated for example a.exe so on a command prompt or power sell or git bash terminal, go the file location for example if a.exe file is on E drive so mount your termial to: e/a.exe (note: the / could be different on different terminal for example powershell: PS E:\Programming\C\c\learningC\teachYourselfC\c_programs_Chapter_7\examples> )
// so now pass arguements like this for powersell 
// PS E:\Programming\C\c\learningC\teachYourselfC\c_programs_Chapter_7\examples> .\a.exe 22 323232 23442.24243
// notice that i have passed an integer a long int and a float
// now command line will redispaly those number
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    double d;
    long l;

    i = atoi(argv[1]);
    l = atol(argv[2]);
    d = atof(argv[3]);

    printf("%d\n%ld\n%f\n", i, l, d);
    return 0;
}

// this is test program, lets see what happen
/* #include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    for ( i = 11; i < argc; i++)
    {
        argv[i]; // this prints nothing the reason is I think no arguements were passed to the main function
    }

    return 0;
} */