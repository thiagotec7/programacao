// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{
  int numeros[2][3]; int a; int b;
// Looping para definir os números da matriz
  printf("Digite os numeros da matriz 2 x 3:\n\n");
  for(a=0; a<2; a++)
  {
      for(b=0; b<3; b++){
        scanf("%i", &numeros[a][b]);
      }
  }
// Looping para exibir a matriz
  printf("\nOs numeros digitados na matriz foram:\n\n");
  for(a=0; a<2; a++){
      for(b=0; b<3; b++){
        printf("%i ", numeros[a][b]);
      }
      printf("\n");
  }
  return 0;
}