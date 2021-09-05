#include <stdio.h>
//criando uma tabuada
int main() {
  int tabuada, t1, t2;
  
  printf("Digite um número de 1 a 10:");
	scanf("%i",&t1);
  
  for (t2 = 1; t2 <=10; t2 ++){
		tabuada = t1*t2;
		printf("%i * %i = %i \n",t1, t2,tabuada);
	
  }

return 0;

}
