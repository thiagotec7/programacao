// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis
int base, altura, area;


// Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o valor da base do Triangulo:");
scanf("%i", &base);

// Solicita entrada de dados para o usuário e grava o valor digitado na variável "b"
printf("\nDigite o valor da altura do Triangulo:");
scanf("%i", &altura);

// Faz a multiplicação dos valores obtidos acima
area = base * altura / 2;
printf("\nA area do Triangulo e igual a %i",area);
return 0;
}