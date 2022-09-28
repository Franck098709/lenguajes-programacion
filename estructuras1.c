#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	
	struct datoPersonas
	{
		char inicial;
		int edad;
		float calif1;
	}persona;
	persona.inicial = 'F';
	persona.edad = 19;
	persona.calif1 = 9.5;
	printf ("La inicial del nombre: %c\n", persona.inicial);
	printf ("La edad es: %d\n", persona.edad);
	printf ("La calificacion obtenida es: %.2f", persona.calif1);
	
	return (0);
}





