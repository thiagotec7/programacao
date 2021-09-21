// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
float imc, peso, altura;

printf("Digite o peso:");
scanf("%f", &peso);
printf("\nDigite altura:");
scanf("%f", &altura);

imc = (peso*(altura*altura));

printf("\nIndice de Massa Corporal igual a: %.2f", imc);

return 0;
}