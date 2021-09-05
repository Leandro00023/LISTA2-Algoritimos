#include <stdio.h>
#include <math.h>

int main(void)
{
  int p=1;
  int dividir=1;
	int sobra=0;
  int total=0;
	

//numeros primos são numeros divisiveis apenas por dois numeros divisiveis por  1 ou por ele mesmo.
	printf("números naturais não nulos de 0 a 100:\n");
	
	  for (p = 1; p <=100; p++)
    { 
			while (dividir <=100)
      {
		    sobra = (p% dividir);
		
		    if (sobra == 0)
			  {
        total++;
		 	  }
		  }
		 dividir++;

     if(total == 2 )
		 {
			 printf("%i", p);
		 }
		 dividir = 1;
		 sobra = 0;
		 total = 0;
		}

  return 0;
}