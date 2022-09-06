#include <stdio.h>

float calculo(int x)
{	
    float resultado;
    return resultado=sqrt(x);
}

int main ()
{
	int valor;
	float salida;
	printf("Programa para calcular la raiz cuadrada de un numero\n\n");
	printf("Ingrese el valor para calcular la raiz: ");
	scanf("%d",&valor);
	salida=calculo(valor);
	printf("\nEl resultado es: %f",salida);
	return (0);
}
