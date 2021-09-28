// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int i=5;

printf("\nTabuada do numero 5\n");
    for (int number=1; number<=10;number++) {
    printf("\n%i x %i = %i\n",i,number,number*i);
    }
}