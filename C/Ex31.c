// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int a, b=-1, c=1, d=1;

// Programa principal
printf("Os vinte primeiros numeros da serie de Bergamaschi sao:\n");
for(int i=0; i<20; i++){   
    a=(b+c+d);
    printf("\n%i",a);
    d=c;
    c=b;
    b=a;
}
return 0;
}