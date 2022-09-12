#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char cadena1[]= "Aprender a programar\n";
	char cadena2[]= "Requiere esfuerzo\n";
	char cadena3[]= "y dedicacion\n";
	FILE* archivo;
	archivo=fopen("almacen2.txt","a");
	fputs(cadena1, archivo);
	fputs(cadena2, archivo);
	fputs(cadena3, archivo);
	fclose(archivo);
	printf("Proceso terminado");
	
	return 0;
}
