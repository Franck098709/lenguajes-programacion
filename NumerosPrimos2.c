#include <stdio.h>


int main ()
{
	int revisar=0, n, d;
	int es_primo;
	n=2;

while (revisar < 99)
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
		     	}
				revisar++;
				n++;
				
			}
			return 0;
		}
