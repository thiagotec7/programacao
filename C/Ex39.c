// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{
// Looping para definir os números da matriz
  int numeros[3][4]; int a; int b; int mult;
  printf("Digite os numeros para matriz 3 x 4 \n\n");
  for(a=0; a<3; a++)
  {
      for(b=0; b<4; b++){
        scanf("%i", &numeros[a][b]);
      }
  }
// Looping para multiplicar os valores da matriz
  	printf("\nDigite um numero para multiplicar os valores da matriz: ");
	scanf("%i", &mult);
 
  printf("\nOs novos numeros da matriz sao:\n\n");
  for(a=0; a<3; a++){
      for(b=0; b<4; b++){
      	numeros[a] [b]= numeros [a] [b]*mult;
        printf("%i ", numeros[a][b]);
      }
      printf("\n");
  }
 
  return 0;
}