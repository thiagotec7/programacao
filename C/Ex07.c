// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
float p1, p2, p3, p4, p5, soma, pago, troco;

printf("Digite o valor do produto 1:");
scanf("%f", &p1);
printf("Digite o valor do produto 2:");
scanf("%f", &p2);
printf("Digite o valor do produto 3:");
scanf("%f", &p3);
printf("Digite o valor do produto 4:");
scanf("%f", &p4);
printf("Digite o valor do produto 5:");
scanf("%f", &p5);

soma = (p1+p2+p3+p4+p5);

printf("\nValor total: %.2f", soma);
printf("\nDigite o valor pago:");
scanf("%f", &pago);

troco = (pago-soma);

if (pago>=soma) {
    printf("\nTroco: %.2f", troco);
}
else {
    printf("\nFalta: %.2f", troco);
}

return 0;
}