/*************************************
Realizó: Francisco Romero
Fecha: 31 de agosto de 2022 
Menú
*************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int opcion=1;
	int a, c, d, e, f, g;
	float b;
	
	while(opcion!=5)
	{
		system ("cls");
		printf("1.-Determinar si un numero pedido por teclado es par o impar\n\n");
		printf("2.-Calcular la Raiz cuadrada de un numero\n\n");
		printf("3.-Elevar un numero a una potencia\n\n");
		printf("4.-Imprimir 2 numeros de mayor a menor\n\n");
		printf("5.-Salir\n\n\n\n");
		printf("¿Cual es la opcion deseada?\n\n");
		scanf("%d", &opcion);
		switch (opcion)
		{
			case 1:
			printf ("Determinar si un numero pedido por teclado es par o impar\n");
			printf ("Digite el numero: ");
			scanf ("%d", &a);
			if (a%2==0)
			{
			
					printf ("El numero es par\n");
				}
				else if (a%2!=0)
				{
					printf("El numero es impar\n");
				}
			
			system ("pause");
			break;
			
			case 2:
				printf ("\nCalcular la raiz cuadrada de un numero\n\n");
				printf ("Digita el valor del numero a calcular: ");
				scanf ("%d", &a);
				b = sqrt(a);
				printf ("El valor de la raiz del numero es %f\n", b);
				system ("pause");
				break;
			
			case 3:
				printf("\nElevar un numero a una potencia\n\n");
				printf("Digita el valor del numero a calcular: ");
				scanf ("%d", &d);
				printf("Digita el valor de la potencia: ");
				scanf ("%d", &e);
				c= pow(d,e);
				printf("El valor del numero es: %d\n", c);
			    system ("pause");
				break;
			
			case 4:
				printf("\nNumero mayor y menor\n\n");
				printf("Digite el primer numero: ");
				scanf("%d", &f);
				printf("Digite el segundo numero: ");
				scanf("%d", &g);
				
				if (f>g)
				{
					printf ("%d" " y " "%d\n", f, g);
				}
		        else
		        {
		        	printf ("%d" " y " "%d\n", g, f);
		        }
		        system ("pause");
		        break;
		
			case 5:
			 printf("\nGracias por usar el programa :)");
				break;
			
				default:
					printf("\nEsta opcion no existe\n\n");
					system("pause");
			break;
		}
	}
	
		return(0);
}
