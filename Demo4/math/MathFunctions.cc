/**
 * power - Calculate the power of number.
 * @param base: Base value.
 * @param exponent: Exponent value.
 *
 * @return base raised to the power exponent.
 */
#include <stdio.h>
#include <stdlib.h>

double power(double base, int exponent)
{


#ifdef USE_DEBUG_VERSION
    printf("USE_DEBUG_VERSION ....... \n");
#endif



    int result = base;
    int i;

    if (exponent == 0) {
        return 1;
    }
    
    for(i = 1; i < exponent; ++i){
        result = result * base;
    }

    return result;
}
