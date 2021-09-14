// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
float c, f;

printf("Digite a temperatura em Celsius:");
scanf("%f", &c);

f = (c * 1.8) + 32;
printf("\nA temperatura em fahrenheit e %.1f", f);

return 0;
}