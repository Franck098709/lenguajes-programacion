/* 
Realizó: Francisco Romero
Fecha: 29 de agosto de 2022
manejo del ciclo while
cicloWhile.c
*/

#include<stdio.h>

int main ()
{
	int tabla;
	int resul;
	int contador=1;
	printf("cual tabla de multiplicar quieres imprimir? ");
	scanf("%d",&tabla);
	while (contador<=10)
{
	resul=contador*tabla;
	printf("%d x %d = %d\n",tabla,contador,resul);
	contador++;
}
return(0);
}
