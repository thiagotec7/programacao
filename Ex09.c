// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis
int numero1, numero2, maior;


// Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o primeiro numero:");
scanf("%i", &numero1);

// Solicita entrada de dados para o usuário e grava o valor digitado na variável "b"
printf("\nDigite o segundo numero:");
scanf("%i", &numero2);

// Comparação do valor da area
if (numero1 >= numero2) {
    maior = numero1;
    printf ("\nO maior numero e %i", maior);
}
else {
    maior = numero2;
    printf("\nO maior numero e %i", maior);
}
return 0;
}