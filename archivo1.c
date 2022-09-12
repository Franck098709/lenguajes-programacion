#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE* archivo;
	archivo = fopen("almacen1.txt","a");
	fputs("Ya estas programando y trabajando con archivos\n", archivo);
	fputs("Requiere un gran esfuerzo y dedicacion\n", archivo);
	fputs("Pero el resultado, vale la pena\n", archivo);
	fclose(archivo);
	printf("Proceso terminado correctamente");
	
	return 0;
}

/*
Las formas de abrir el archivo son estas:
r - abre el archivo en modo de solo lectura
w - abre el archivo para escritura (Si no existe lo crea, si existe lo reemplaza)
a - abre el archivo para agregar informacion (Si no existe lo crea)
r+ - abre el archivo para lectura / escritura (Comienza al principio del archivo)
w+ - abre el archuvo para lectura / escritura (Sobre-escribe el archivo si este ya existe o lo crea si no)
a+ - abre el archivo para lectura / escritura (Se sitúa al final del archivo)
*/
