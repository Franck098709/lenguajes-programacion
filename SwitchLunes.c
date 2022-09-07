#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int opcion=1, n, d;
	int es_primo;
	int i, total, primo, cont, revisar = 0;
	n=2;
	
	while(opcion!=5)
	{
		system ("cls");
		printf("Este es un menu con opciones, elige la que quieras utilizar:\n\n");
		printf("1.-Realizar la suma de los numeros del 1 al 100\n\n");
		printf("2.-Realizar la suma de los numeros pares entre el 1 y el 100\n\n");
		printf("3.-Realizar la suma de los numeros nones entre el 1 y el 100\n\n");
		printf("4.-Identicar los numeros primos entre el 1 y el 100\n\n");
		printf("5.-Salir\n\n\n\n");
		printf("¿Cual es la opcion deseada?\n\n");
		scanf("%d", &opcion);
		switch (opcion)
		{
			case 1:
				total = 0;
				system ("cls");
				printf("1.-Realizar la suma de los numeros del 1 al 100\n\n");
				for (i=1;i<=100;i++)
				{
					total = total + i;
				
				}
				printf("El resultado de la suma de los numeros entre 1 y 100 es igual a: %d\n\n", total);
				system ("pause");
			break;
		
		
			
			case 2:
				total = 0;
				system ("cls");
				printf("2.-Realizar la suma de los numeros pares entre el 1 y el 100\n\n\n");
				for (i=1;i<=100;i++)
				{
					if(i%2==0)
					{
					total = total + i;
					}
					}
					printf("La suma de los numeros pares es igual a: %d\n\n", total);
	            system ("pause");
			break;
		
			case 3:
				total = 0;
				system ("cls");
				printf("2.-Realizar la suma de los numeros nones entre el 1 y el 100\n\n\n");
					for (i=1;i<=100;i++)
				{
					if(i%2!=0)
					{
					total= total + i;
					}
					}
					printf("La suma de los numeros pares es igual a: %d\n\n", total);
				system ("pause");
			break;
			
			case 4:
				system ("cls");
		     	printf("4.-Identicar los numeros primos entre el 1 y el 100\n\n\n");
		     	while (revisar < 99)
		     	{
		     		es_primo = 1;
		     		for (d = 2; d < n; ++d)
		     		{
		     			if (n % d == 0)
		     			{
		     				es_primo=0;
		     				break;
		     			}
		     		}
		     	
		     	if (es_primo)
		     	{
		     		printf("%d ", n);
		     		printf("\n");
		     	}
		     	
				revisar++;
				n++;
				}
					printf("\n");
					system("pause");
					break;
			
			case 5:
				system ("cls");
				printf("\nGracias por usar el programa :)\n");
			break;
			
			default:
				printf("\nEsta opcion no existe, vuelve a intentar\n\n");
					system("pause");
			break;
		}
	}
		return (0);
	}
	

