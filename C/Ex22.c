// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int numero;

printf("Digite um numero positivo: ");
scanf("%i", &numero);

while(numero<=0){
    printf("Erro!, digite somente um numero positivo maior que 0 \nDigite novamente: ");
    scanf("%i",&numero);
}

printf("\nNumero aceito");

return 0;
}
