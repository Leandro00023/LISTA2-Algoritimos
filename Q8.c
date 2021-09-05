#include <stdio.h>
//LEIA TODOS OS COMENTARIOS PLEASE =)
//CALCULAO DO IMC (PESO / (ALTURA * ALTURA) = IMC)
//TABELA VALORES DO IMC
//MENOR QUE 18.5 MAGREZA	Grau 0
//ENTRE 18.5 E 24.9	NORMAL	Grau 0
//ENTRE 25.0 E 29.9	SOBREPESO Grau I
//ENTRE 30.0 E 39.9	OBESIDADE Grau II
//MAIOR QUE 40.0 OBESIDADE GRAVE Grau III

int main(void)
{
float IMC;
float ALTURA;
float PESO;

printf("Digite sua ALTURA:\n");
scanf("%f", &ALTURA);

printf("Digite sua PESO:\n");
scanf("%f", &PESO);

IMC = PESO / (ALTURA * ALTURA);
printf ("%.2f ", IMC);


//MENOR QUE 18.5 MAGREZA Grau 0
if (IMC <= 18.5)
{
 printf("MAGREZA Grau 0: seu IMC e menor ou igual a 18.5");
}

//ENTRE 18.5 E 24.9	NORMAL Grau 0
else if (IMC > 18.5 &&  IMC < 25)
{
 printf("NORMAL Grau 0: seu IMC está entre 18.5 e 24.9");
}

//ENTRE 25.0 E 29.9	SOBREPESO Grau I
else if (IMC >= 25.0 &&  IMC < 30)
{
 printf("SOBREPESO Grau I: seu IMC está entre 25.0 e 29.9");
}

//ENTRE 30.0 E 39.9	OBESIDADE Grau II
else if (IMC >= 30.0 && IMC < 40)
{
 printf("OBESIDADE Grau II: seu IMC está entre 30.0 e 39.9");
}

//MAIOR QUE 40.0 OBESIDADE GRAVE Grau III
else if (IMC >= 40.0)
{
 printf("OBESIDADE GRAVE Grau III: seu IMC e maior ou igual a 40.0");
}

  return 0;
}

//FONTE 
//https://www.programasaudefacil.com.br/calculadora-de-imc

//FABRICIO USE ALTURA 1.70 e PESO 72.25 para descobri o "buraco" no codigo dosdos demais alunos e quem descobriu o "buraco" foi o Carlos mas o Tulio e eu ficamos quase 1 hr discutindo isso ate Tulio achar a solução.