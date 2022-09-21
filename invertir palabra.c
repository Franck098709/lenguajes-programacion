#include <stdio.h>
#define MAX 25

int main ()
{
	int p_i,p_f,cont;
	char palabra[MAX],caracter,aux;
	int i;
	printf("Introduzca una palabra: ");
	scanf("%c",&caracter);
	i=0;
	while (i<MAX && caracter!='.')
	{
		palabra[i]=caracter;
		i++;
		scanf("%c",&caracter);
	}
	p_i=0;
	p_f=i-1;
	while (p_i<p_f)
{
	aux=palabra[p_i];
	palabra[p_i]=palabra[p_f];
	palabra[p_f]=aux;
	p_i++;
	p_f--;
}
printf("\n");
for (cont=0;cont<i;cont++)
{
	printf("%c", palabra[cont]);
}
	return 0;
}












