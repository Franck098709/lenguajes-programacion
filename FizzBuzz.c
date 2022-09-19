#include <stdio.h>
#include <stdlib.h>

int main()
{

int i;

printf ("Mientras el numero sea un multiplo de 3 se escribira la palabra (Fizz), si es multiplo de 5 se escribira la palabra (Buzz), pero si es multiplo de ambos se escribira (FizzBuzz)\n\n");
for (i = 1; i <= 100; i++)
{
	if (i%3==0 && i%5==0)
	{
	printf ("FizzBuzz\n");
    }
    else if (i%3==0)
	       {
		   printf ("Fizz\n");
	       }
         	else if (i%5==0)
         	{
		     printf ("Buzz\n");
         	}
               	else 
             	{
	         	printf("%d\n",i);
            	}
}
return(0);	
}
