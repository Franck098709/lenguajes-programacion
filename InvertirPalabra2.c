#include <stdio.h>
#include <string.h>

int main ()
{
	char buffer[100];
	int i;
	printf("introduzca palabra\n");
	gets(buffer);
	for (i = strlen(buffer)-1;i>=0; i--)
	putchar(buffer[i]);
	
	return (0);
	
}
