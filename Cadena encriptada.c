#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
char cadena[50];
char destino[50];
char *p;

printf ("A continuacion escriba una oracion de maximo 50 caracteres y sin utilizar caracteres especiales para encriptarla\n\n");
gets (cadena);
strcpy (destino, cadena);
p = destino;
while (*p != '\0') {
if (*p == 'a') *p = '&';
if (*p == 'e') *p = '#';
if (*p == 'i') *p = '%';
if (*p == 'o') *p = '?';
if (*p == 'u') *p = '!';
p++;
}
printf( "La cadena original es: \"%s\" \n", cadena );
printf( "La cadena queda: \"%s\" \n", destino );
}

