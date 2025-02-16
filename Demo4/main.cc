#include <stdio.h>
#include <stdlib.h>
#include <config.h>

#ifdef USE_MYMATH

#include <MathFunctions.h>

#else
#include <math.h>
#endif


int main(int argc, char *argv[]) {




    double base = 2;
    int exponent = 3;

#ifdef USE_MYMATH
    printf("Now we use our own Math library. \n");
    double result = power(base, exponent);
#else
    printf("Now we use the standard library. \n");
    double result = pow(base, exponent);
#endif

    printf("%g ^ %d is %g\n", base, exponent, result);
    return 0;
}
