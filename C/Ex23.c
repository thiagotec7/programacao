// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int a, b;
    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("\nDigite um segundo numero: ");
    scanf("%i",&b);
while (a>b){
    printf("\nO segundo deve ser maior que o primeiro! \nDigite novamente o segundo numero: ");
    scanf("%i",&b);
}
printf("\nNumero aceito");

}
