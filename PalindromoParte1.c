#include <stdio.h>
#include <string.h>

int main ()
{
	char palabra [100], palabra1 [100], palabra2 [100];
	int i, r, cont = 0;
	printf ("Introduzca palabra\n\n");
	gets (palabra);
	
	for (i = 0; i <= strlen(palabra); i++)
	{
		if (palabra [i] != ' ')
		{
			palabra1 [cont] = palabra [i];
			cont++;
		}
	}
	cont = 0;
	for (i=strlen(palabra1)-1;i>=0;i--)
	{
		palabra2[cont]=palabra1[i];
		cont++;
}
r=strcmp(palabra1, palabra2);

if (r==0)
printf ("La cadena es un palindromo\n");
else
printf ("La cadena no es un palindromo\n");


	puts (palabra1);
	puts (palabra2);

		return (0);
}
