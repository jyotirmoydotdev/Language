/*
Computes the absolute value of an integer number. The behavior is undefined if the result cannot be represented by the return type.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
int main(void)
{
    printf("abs(+3) = %d\n", abs(+3));
    printf("abs(-3) = %d\n", abs(-3));
 
//  printf("%+d\n", abs(INT_MIN)); // undefined behavior on 2's complement systems
}
