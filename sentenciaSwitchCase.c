/********************************************
Realizó: Francisco Romero
Fecha: 30 de ago de 2022
sentencia Switch Case
sentenciaSwitchCase.c
********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int opcion=1;
    float radio, area, baseT, alturaT, baseR, alturaR;
    while (opcion!=4)
    {
        system ("cls");
		printf("1.- Calcular el area de un circulo\n");
    	printf("2.- Calcular el area de un triangulo\n");
    	printf("3.- Calcular el area de un Rectangulo\n");
    	printf("4.- Salir\n");
    	printf("Cual es la opcion deseada: ");
    	scanf("%d",&opcion);
    	switch(opcion)
    	{
		case 1:
		//instrucciones si opcion=1
		printf("Vamos a calcular el area de un circulo\n\n");
		printf("Escribe el valor del radio: ");
		scanf("%f", &radio);
		area= 3.141516*pow(radio,2);
		printf("El area del circulo de radio = %.2f es %.2f\n",radio, area);
		system("pause\n");
		break;
		
		case 2:
		printf("Vamos a calcular el area de un triangulo\n\n");
		printf("Digite el valor de la base del triangulo: ");
		scanf("%f", &baseT);
		printf("Digite el valor de la altura del triangulo: ");
		scanf("%f", &alturaT);
		area=(baseT*alturaT)/2;
		printf("El area del triangulo es= %.2f\n", area);
		system("pause");
		break;
		
		case 3:
		printf("Vamos a calcular el area de un Rectangulo\n\n");
		printf("Digite el valor de la base del Rectangulo: ");
		scanf("%f", &baseR);
		printf("Digite el valor de la altura del Rectangulo: ");
		scanf("%f", &alturaR);
		area= baseR*alturaR;
		printf("El area del rectangulo es= %.2f\n", area);
		system("pause");
		break;
		
		case 4:
		printf("Seleccionaste la opcion 4\n");
		break;
		 
		 default:
		printf("Seleccionaste una opcion que no esta definida\n");
		system("pause");
		break;
		//cierre del switch
    }
    }
	system("pause");
	return (0);
    }  //cierre del main

	
