// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
float media, p1, p2;

printf("Digite a nota da P1:");
scanf("%f", &p1);
printf("\nDigite a nota da P2:");
scanf("%f", &p2);

media = ((p1+(2*p2))/3);

printf("\nMedia final igual a: %.2f", media);
    if (media>=5){
        printf("\nAprovado");
    }
    else {
        printf("\nReprovado");
    }

return 0;
}