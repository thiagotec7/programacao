// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int sum=0;

for(int i=1; i<=100; i++)
   {
// Adicionando 1 a 100 números
      sum=sum+i;
   }
printf("A soma dos numero de 1 a 100 e igual a: %i\n", sum);
return 0;
}