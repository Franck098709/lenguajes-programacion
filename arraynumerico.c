#include <stdio.h>

int main ()
{
	int numero[5];
	int suma, suma2=0, i;
	
	numero[0] = 200;
	numero[1] = 150;
	numero[2] = 100;
	numero[3] = -50;
	numero[4] =	300;
	suma = numero[0] + numero [1] + numero [2] + numero[3] + numero [4];
	printf ("Su suma es: %d\n", suma);	
	
	for (i=0; i<=4; i++)
	{
		suma2 = suma2 + numero[i];
	}
	printf ("Su suma es: %d\n", suma2);
	
	
	return (0);
}
