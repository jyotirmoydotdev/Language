// remainder of the floating-point division operation

#include <stdio.h>
#include <math.h>
#include <fenv.h>
 
int main()
{
    printf("fmod(+5.1, +3.0) = %.1f\n", fmod(5.1,3));
    printf("fmod(-5.1, +3.0) = %.1f\n", fmod(-5.1,3));
    printf("fmod(+5.1, -3.0) = %.1f\n", fmod(5.1,-3));
    printf("fmod(-5.1, -3.0) = %.1f\n", fmod(-5.1,-3));
 
    // special values
    printf("fmod(+0.0, 1.0) = %.1f\n", fmod(0, 1));
    printf("fmod(-0.0, 1.0) = %.1f\n", fmod(-0.0, 1));
    printf("fmod(+5.1, Inf) = %.1f\n", fmod(5.1, INFINITY));
 
    // error handling
    //feclearexcept(FE_ALL_EXCEPT);
    //printf("fmod(+5.1, 0) = %.1f\n", fmod(5.1, 0));
    //if(fetestexcept(FE_INVALID)) puts("    FE_INVALID raised");
	return 0;
}
