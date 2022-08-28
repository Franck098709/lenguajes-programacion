/***********************************************
Realizó: Francisco Romero
Fecha: 23 ago 2022
Manejo de operadores logicos y de la relacion
Operadores2.c

***********************************************/

#include <stdio.h>

int main ()
{
	int A=0;
	int B=0;

	printf("Tabla And\n");
	printf("  A         B      R\n");
	printf("  %d   &&    %d   =  %d\n",A,B,A&&B);
	printf("  %d   &&    %d   =  %d\n",A,!B,A&&!B);
	printf("  %d   &&    %d   =  %d\n",!A,B,!A&&B);
	printf("  %d   &&    %d   =  %d\n\n\n",!A,!B,!A&&!B);
	printf("Tabla Or\n");
	printf("  A         B      R\n");
	printf("  %d   ||    %d   =  %d\n",A,B,A||B);
	printf("  %d   ||    %d   =  %d\n",A,!B,A||!B);
	printf("  %d   ||    %d   =  %d\n",!A,B,!A||B);
	printf("  %d   ||    %d   =  %d\n\n\n",!A,!B,!A||!B);
	
	
	return(0);
}
