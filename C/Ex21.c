// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
float media=5, p1, p2;

printf("Digite a nota da P1: ");
scanf("%f", &p1);

p2 = ((3*media-p1)/2);

printf("\nA nota da P2 devera ser no minimo %.2f para ser aprovado\n", p2);

return 0;
}