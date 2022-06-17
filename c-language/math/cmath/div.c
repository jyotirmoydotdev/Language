//Computes both the quotient and the remainder of the division of the numerator x by the denominator y.

#include <stdio.h>
#include <stdlib.h>

int main () {
   div_t output;

   output = div(27, 4);
   printf("Quotient part of (27/ 4) = %d\n", output.quot);
   printf("Remainder part of (27/4) = %d\n", output.rem);

   output = div(27, 3);
   printf("Quotient part of (27/ 3) = %d\n", output.quot);
   printf("Remainder part of (27/3) = %d\n", output.rem);

	return 0;
}
