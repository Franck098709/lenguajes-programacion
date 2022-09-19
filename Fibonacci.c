/*********************************
Realizó: Francisco Romero López
Fecha: 19/09/22
Serie de Fibonacci
Fibonacci.c
**********************************/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int valor;
	int a=1, b=1, cont=1;	
	int suma;
		
    printf ("Programa para identificar los valores en la serie de Fibonacci\n\n");
	printf ("¿Cuantos numeros de la serie de Fibonacci desea encontrar?");
	scanf ("%d", &valor);
	
	printf ("%d %d ", a, b);
	while (cont<=valor-2)
	{
		suma = a+b;
		a=b;
		b=suma;
		cont++;
		printf ("%d ", suma);
	}
		return (0);
}
