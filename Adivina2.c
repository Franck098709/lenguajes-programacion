/***************************************
Realizó: Francisco Romero López
Fecha: 20/09/22
Manejo de numeros aleatorios mediante la funcion rand y srand

***************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int valor;
	int num;
	int cont = 1;
	srand(time(NULL));
	valor = rand()%51;
	int opcion, intentos;
	
	printf ("Este es un programa para adivinar un numero en el numero de intentos que tu decidas :D\n\n");
	printf ("Quieres jugar?\n\n");
	printf ("Presiona 1 para acceder al juego, presiona 0 para no jugar\n");
	scanf ("%d", &opcion);
	
	if (opcion==1)
	{
     printf ("\nCuantos intentos deseas tener para adivinar el numero, debe de ser menor a 10\n\n");
     scanf ("%d", &intentos);
     
	while (num!=valor)
	{
		printf ("\nDigite un numero para comprobar si es igual al numero oculto\n");
	    scanf ("%d", &num);
	    if (cont == intentos)
	    {
	    	printf ("\nNo pudiste encontrar el numero secreto, el numero era: %d\n\n", valor);
	    	num = valor;
	    	}
	    	
		else if (num<valor)
		{
			printf ("\nEstas abajo, intentalo de nuevo\n\n");
		}
		else if (num>valor)
		{
			printf ("\nYa te pasaste, intenta de nuevo\n\n");
		}
		else
		{
			printf ("\nEl numero correcto es: %d\n", valor);
			printf ("\nEncontraste el numero oculto, felicidades!\n");
		}
		cont++;
	}
	printf ("\nEl numero de intentos fue: %d", cont-1);
	}
else
printf ("Puedes intentarlo cuando quieras :D");
	return (0);
}
