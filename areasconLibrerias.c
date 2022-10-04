#include <stdio.h>
#include "areas.h"

int main()
{
    float primerValor, segundoValor, tercerValor, resultado;
    int opcion=1;
    while (opcion!=5)
    {
    printf("Calculadora.\n\n");
    printf("Que operacion quieres realizar?\n\n");
    printf("1. Calcular el area de un circulo.\n");
    printf("2. Calcular el area de un pentagono.\n");
    printf("3. Calcular el area de un trapecio.\n");
    printf("4. Calcular el area de un rectangulo.\n");
    printf("5. Salir\n");
    printf("\nElige una opcion: ");
    scanf("%d", &opcion);
    switch (opcion)
    {
    	 case 1:
    	 	system ("cls");
    	 	printf ("Circulo\n");
    	 	printf ("\nPor favor, ingrese el valor del radio en metros para realizar la operacion: ");
            scanf ("%f", &primerValor);
            resultado = circulo(primerValor);
            printf ("\nEl area del circulo es: %.2f metros cuadrados\n\n", resultado);
            break;
        case 2:
        	system ("cls");
        	printf ("Pentagono\n");
        	printf ("\nPor favor, ingrese el valor del perimetro para realizar la operacion: ");
            scanf ("%f", &primerValor);
            printf ("\nPor favor, ingrese el valor del apotema para realizar la operacion: ");
            scanf ("%f", &segundoValor);
            resultado = pentagono(primerValor, segundoValor);
            printf ("\nEl area del pentagono es: %.2f metros cuadrados\n\n", resultado);
            break;
        case 3:
        	system ("cls");
        	printf ("Trapecio\n");
        	printf ("\nPor favor, ingrese el valor de la base pequeña para realizar la operacion: ");
            scanf ("%f", &primerValor);
            printf ("\nPor favor, ingrese el valor de la base grande para realizar la operacion: ");
            scanf ("%f", &segundoValor);
        	printf ("\nPor favor, ingrese el valor de la altura para realizar la operacion: ");
            scanf ("%f", &tercerValor);
        	resultado = trapecio(primerValor, segundoValor, tercerValor);
        	printf ("\nEl area del trapecio es: %.2f metros cuadrados\n\n", resultado);
            break;
        case 4:
        	system ("cls");
        	printf ("Rectangulo\n");
        	printf ("\nPor favor, ingrese el valor de la base para realizar la operacion: ");
            scanf ("%f", &primerValor);
            printf ("\nPor favor, ingrese el valor de la altura para realizar la operacion: ");
            scanf ("%f", &segundoValor);
            resultado = rectangulo(primerValor, segundoValor);
            printf ("\nEl area del rectangulo es: %.2f metros cuadrados\n\n", resultado);
            break;
        default:
            printf("\nGracias por usar el programa :D.\n");
        break;
    }
    
	}
return 0;
}
