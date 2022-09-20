/***************************************
Realizó: Francisco Romero López
Fecha: 20/09/22
Manejo de numeros muy grandes en c

***************************************/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i; 
	float res=1;
	
	for (i=1; i<=1000; i++)
	{
		printf ("casilla %d= %.0f\n", i, res);
		res=res*2;
		
	}
	
	
	
	
	
	
	return (0);
}
