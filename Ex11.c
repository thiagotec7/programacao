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
if (numero1 == numero2) {
    printf ("\nOs numeros sao iguais");
}

else {
if (numero1 >= numero2) {
    maior = numero1;
    printf("\nO maior numero e o %i", maior);
}
else {
    printf("\nO maior numero e o %i", numero2);
}
}
return 0;
}