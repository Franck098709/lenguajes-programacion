#include <stdio.h>

int main ()
{
	int primosPM, n, d;
	int es_primo;
	printf("¿Cuantos numeros primos quiere imprimir?");
	scanf("%d", &primosPM);
	n=2;

while (primosPM > 0)
		     	{
		     		es_primo = 1;
		     		for (d = 2; d < n; ++d)
		     		{
		     			if (n % d ==0)
		     			{
		     				es_primo=0;
		     				break;
		     			}
		     		}
		     	
		     	if (es_primo)
		     	{
		     		printf("%d ", n);
		     		primosPM--;
		     	}
				n++;
				
			}
			return 0;
		}
