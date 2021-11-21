// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int a, b=1, c=0;
                      
// Programa principal 
printf("Os trinta primeiros numeros da serie de Fibonacci sao:\n");
for(int i=0; i<30; i++){
a=b+c;
printf("\n%i",a);
b=c;
c=a;
}
return 0;
}