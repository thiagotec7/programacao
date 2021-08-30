// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis
int base, altura, area;


// Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o valor da base:");
scanf("%i", &base);

// Solicita entrada de dados para o usuário e grava o valor digitado na variável "b"
printf("\nDigite o valor da altura:");
scanf("%i", &altura);

// Faz a multiplicação dos valores obtidos acima
area = base * altura;

// Comparação do valor da area
if (area >= 100) {
    printf ("\nTerreno grande = %i", area);
}
else {
    printf("\nA area do retangulo e pequena sendo igual a %i", area);
}
return 0;
}