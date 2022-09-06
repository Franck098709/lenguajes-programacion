#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int suma()
{
	int i;
	int total = 0;
	for (i=1;i<=100;i++)
    {
    total = total + i;
}
	return total;
}

int main ()
{
	int salida;
	printf("Programa para sumar los numeros del 1 al 100\n\n");
	salida=suma();
	printf("\nEl resultado es: %d",salida);
	return (0);
}
