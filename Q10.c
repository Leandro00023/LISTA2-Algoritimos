#include <stdio.h>

int main(void){
 int fatorial;
 int n;
 printf("Insira valor para calcular seu fatorial:");
 scanf("%d", &n);
 
 for(fatorial = 1; n > 1; n = n - 1)
 fatorial = fatorial*n;
 printf("Seu Fatorial Calculado e: %d", fatorial);

return 0;
}