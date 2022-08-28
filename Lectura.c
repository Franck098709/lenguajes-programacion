/***********************************************
Realizó: Francisco Romero
Fecha: 23 ago 2022
Lectura por teclado
Lectura.c

***********************************************/

#include<stdio.h>

int main ()
{
	int val_1;
	int val_2;
	
	printf("Vamos a capturar 2 valores y comparar si son iguales\n");
	printf("Escribe el primer valor: ");
	scanf("%d",&val_1);
	printf("Escribe el segundo valor: ");
	scanf("%d",&val_2);
	if(val_1==val_2)
{
	printf("los valores son iguales\n");
}
    else if (val_1>val_2)
    {
    	printf("valor1 es mayor que valor2\n");
    }
    else
    {
    	printf("valor2 es mayor que valor1");
    }
	return(0);
}


