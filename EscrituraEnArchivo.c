#include <stdio.h>
#include <stdlib.h>
int main ()
{

    int i = 1;
    char nombre [40];
	char edad [3];
	char estatura [4];
	FILE* archivo;
	archivo = fopen("datos.csv","a");
	while (i<=nombres){
	printf("Escribe el nombre completo a almacenar: ");
	gets(nombre);
	fputs(nombre,archivo);
	fputs (", ", archivo);
	printf("Que edad tiene: ");
	gets(edad);
	fputs(edad,archivo);
	fputs (", ", archivo);
	printf("Cual es su estatura: ");
	gets(estatura);
	fputs(estatura,archivo);
	fputs("\n", archivo);
	i++;
	}
	fclose(archivo);

	return 0;
}
