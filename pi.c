#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
   int i;
   int limite = 10000000;
   double suma = 0;
   float pi = 0;
       for (i=1; i<=limite; i++)
       {
       	suma = suma + 1 / (pow(i,2));
       }
	pi = sqrt(suma * 6);
	printf ("El valor de pi es: %f \n", pi);
	
	return (0);
}
