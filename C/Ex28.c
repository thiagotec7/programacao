// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int x=1;
    
while (1){
    for(int i=1; i<=10; i++) {
        printf("%i x %i = %i \n",i,x,x*i);
    }

    printf("\nPressione uma tecla para a proxima tabuada\n\n");
    getch();
    x++;

    if (x ==21){
        printf("\nSomente ate a tabuada do 20");
        break;
    }
}
return 0;
}