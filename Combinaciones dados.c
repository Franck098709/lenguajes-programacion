#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int d;

    printf ("Tenemos un total de 36 combinaciones y asi se verian dependiendo del dado en el que nos centremos\n\n");
    printf ("Las combinaciones posibles entre los dos dados son:\n\n");
	printf ("Dado 1       Dado 2     /     Dado 1        Dado 2\n");
	for (i=1; i<=6; i++)
	{
		printf ("\n");
		for (d=1; d<=6; d++)
		printf ("  (%d     :      %d)      /      (%d      :      %d)\n", i, d, d, i);
	}
	return (0);
}
