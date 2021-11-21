// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

//Declaração das variáveis
int constante, resultado;

//Declaração do vetor com 20 posições
int numeros[20];

//Looping para popular o vetor
printf("Digite 20 numeros:\n\n");
for (int i=0; i<20; i++){
    scanf("%i", &numeros[i]);
}

printf("\nDigite um numero para multiplicar os valores do vetor: ");
scanf("%i", &constante);

//Looping para exibir os novos valores do vetor
printf("\nOs valores do vetor multiplicados pelo numero digitado sao: \n\n");
for (int i=0; i<20; i++){
    resultado=constante*numeros[i];
    printf("%i\n",resultado);
}
return 0;
}