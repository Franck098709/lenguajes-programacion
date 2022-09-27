#include <stdio.h>

int main ()
{

	int numero [5] = {200, 150, 100, -50, 300};
	int suma=0, i;
	
	for (i=0; i<=4; i++)
	{
		suma = suma + numero[i]; 
	}
	printf ("Su suma es: %d\n", suma);
	
	
	
	return 0;
}
