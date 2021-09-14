// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis
int lado, area;

// Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o valor de um dos lados do quadrado:");
scanf("%i", &lado);
area = lado * lado;

printf("\nA area do quadrado e igual a %i",area);
return 0;
}