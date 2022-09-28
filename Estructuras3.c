#include <stdio.h>
#include <string.h>

int main ()
{
	int edad, calificacion, i, j=0, cont = 0;
	char nombre [20];
 struct datosPersonas
 {
 	char nombre[20];
 	int edad;
 	float calif1;	
}persona[5];

for (i=0; i<=4; i++)
{
printf ("Por favor, ingrese el nombre de la persona %d\n", i+1);
gets (nombre);
strcpy (persona[i].nombre, nombre);
printf ("\nPor favor, ingrese la edad de la persona\n");
scanf ("%d", &persona[i].edad);
printf ("\nPor favor, ingrese la calificacion obtenida\n");
scanf ("%f", &persona[i].calif1);
fflush (stdin);
system ("cls");
}

while (j<=4)
{
printf ("\n%s tiene %d a%cos y su calificacion es de %.2f\n", persona[j].nombre, persona[j].edad, 164, persona[j].calif1);
j++;
}

	return (0);
}
