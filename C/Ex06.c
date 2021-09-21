// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
float dolar, valor, real;

printf("Digite a cotacao do Dolar hoje:");
scanf("%f", &dolar);

printf("\nDigite um valor em Dolar:");
scanf("%f", &valor);

real = (dolar * valor);
printf("\nO valor em Reais e: %.2f", real);

return 0;
}