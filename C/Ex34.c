// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

//Declaração das variáveis
int maior;

//Declaração do vetor com 10 posições
int numeros[10];

//Looping para popular o vetor
printf("Digite 10 numeros: \n\n");
for (int i=0; i<10; i++){
    scanf("%i", &numeros[i]);
}
printf("\nO maior numero e o numero: ");
maior=numeros[0];
for (int i=1; i<10; i++){

    if(numeros[i]>maior){
        maior=numeros[i];
        }
    }
printf("%i\n", maior);
return 0;
}