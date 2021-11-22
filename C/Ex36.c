// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[], int a, int mult, int b)
{

//Declaração dos vetores com 20 posições
  	int numeros[20];
	int numeros2[20];
//Looping para popular o vetor
  printf("Digite 20 numeros:\n\n");
  
  for(a=0; a<20; a++)
 	 {
    scanf("%i", &numeros[a]);
	 }
  printf("\n\nOs numeros digitados foram:\n");
  for(a=0; a<20; a++)
  {
      printf("%i\n", numeros[a]);
  }
  //Looping para exibir os novos valores do vetor
  	printf("\n\nDigite um numero para multiplicar os valores do vetor:");
	scanf("%i", &mult);
	
  for(a=0; a<20; a++)
 	 {
    	numeros2[a]=numeros[a]*mult ;
	 }
	 
	printf("\n\nOs valores do vetor multiplicados pelo numero digitado sao:\n\n");	 
  	for(a=0; a<20; a++)	 
		{
     		printf("%i\n", numeros2[a]);
  		}
  return 0;
}