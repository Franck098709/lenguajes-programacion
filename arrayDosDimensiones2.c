#include <stdio.h>

int main ()
{
	
	char mensajeError [5][80] = 
	{
		"Archivo no encontrado",
		"El archivo no se puede abrir para escritura",
		"Archivo vacio",
		"El archivo contiene datos de tipo incorrecto",
		"El archivo esta siendo usado"
	};
	
	printf ("El segundo mensaje de error es: %s\n", mensajeError[1]);
	printf ("La primera letra del tercer mensaje de error es: %c\n", mensajeError[2][50]);

	return 0;
}
