// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração do vetor com 10 posições
int numeros[10];

// Looping para popular o vetor
printf("\nDigite 10 numeros:\n");
for (int i=0; i<10; i++){
    scanf("%i", &numeros[i]);
}

//Looping para exibir os valores do vetor
printf("\nOs numeros digitados em ordem inversa foram: \n");
for (int i=9; i>=0; i--){
    printf("\n%i",numeros[i]);
}
return 0;
}