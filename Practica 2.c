/*
Realizó: Francisco Romero
Fecha: 22 agos 2022
Programa para conocer el manejo de la condicion if
*/
#include <stdio.h>
int main()
{
	
	int x=5; // con un igual es una asignación
	int y=20;
	if (x==y) // con 2 iguales es comparación
	{
		printf("el resultado es igual %d",y); //El %d se reemplaza por una variable y segun el numero de % usamos las mismas variables
	}
	else if (x>y) // Se puede repetir las veces que uno necesite
	{
		printf("X=%d es mayor que y=%d",x,y);
	}
	else
	{
		printf("x=%d es menor que y=%d",x,y);
	}
	return (0);
}

