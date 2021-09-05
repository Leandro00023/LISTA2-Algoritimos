#include <stdio.h>

int main(void) 
{
  char FraseVertical [] = "Estruturas de repeticao facilitam muito a minha vida, somente assim eu conseguiria imprimir esta frase. FALEI QUE IA FAZER DE NOVO";
  
	int i;
  
	for(i = 0; FraseVertical[i] != '\0'; i++)
	{
		printf("%c\n", FraseVertical[i]);
	}

return 0;
}
//FONTE:http://linguagemc.com.br/string-em-c-vetor-de-caracteres/