/***********************************************
Realizó: Francisco Romero
Fecha: 23 ago 2022
Manejo de operadores logicos y de la relacion
operadores.c
***********************************************/

#include <stdio.h>
int main ()
{
	int A=5;
	int B=7;
	
	printf("(A==B)&&(A<B) el resultado seria: %d\n", (A==B)&&(A<B));
	printf("(A==5)||(A>7) el resultado seria: %d\n", (A==5)||(A>7));
	printf("!(A==5) el resultado seria: %d", !(A==5));
	return (0);
}


