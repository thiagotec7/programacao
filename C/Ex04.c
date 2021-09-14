// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis
int a, b, c, d, media;

printf("Digite o primeiro numero:");
scanf("%i", &a);

printf("\nDigite o segundo numero:");
scanf("%i", &b);

printf("\nDigite o terceiro numero:");
scanf("%i", &c);

printf("\nDigite o quarto numero:");
scanf("%i", &d);

media = (a + b + c + d) / 4;

printf("\nA media dos numeros digitados e igual a %i", media);
return 0;
}