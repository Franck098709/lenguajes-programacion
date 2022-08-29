/***********************************
Realizo: Francisco Romero
Fecha: 29 de ago de 2022
manejo del ciclo for
cicloFor.c
***********************************/

#include<stdio.h>

int main()
{
	int i;
	int j;
	for (i=1;i<=10;i++)
	{
		printf("El contador es= %d\n",i);
		for (j=1;j<=10;j++)
		{
			printf("El contador del segundo ciclo es:= %d\n",j);
		}
	}
		
	return(0);
}
