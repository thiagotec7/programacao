// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int numero;
    printf("Digite um numero: ");
    scanf("%i",&numero);

while(numero<=0) {
    printf("\nErro!, Aceito somente numeros positivos maiores que 0 \nDigite novamente: ");
    scanf("%i",&numero);

    }
printf("\nTabuada do numero %i\n",numero);    
for (int i=1 ; i <=10 ; i++) {
    printf("\n%i x %i = %i\n",numero,i,numero*i);
    }
}