#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	struct datosPersonas
	{
		char nombre[20];
		int edad;
		float calif1;
	};
	
	struct datosPersonas persona = {"Francisco", 19, 9};
	printf ("El nombre de la persona es: %s\n", persona.nombre);
	printf ("La edad es: %d\n", persona.edad);
	printf ("La calificacion obtenida es: %.2f", persona.calif1);
		
	return (0);
}
