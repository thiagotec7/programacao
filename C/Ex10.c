// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis
int numero1, numero2, menor;


// Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o primeiro numero:");
scanf("%i", &numero1);

// Solicita entrada de dados para o usuário e grava o valor digitado na variável "b"
printf("\nDigite o segundo numero:");
scanf("%i", &numero2);

// Comparação do valor da area
if (numero1 <= numero2) {
    menor = numero1;
    printf ("\nO menor numero e %i", menor);
}
else {
    menor = numero2;
    printf("\nO menor numero e %i", menor);
}
return 0;
}