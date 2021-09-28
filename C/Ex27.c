// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int numero;

printf("Digite um numero: ");
scanf("%i", &numero);

while(numero<0){
printf("\nSomente aceito numeros postivos\nDigite um numero novamente: ");
scanf("%i", &numero);
    }
int interval;
int interval2;

printf("\nQual o inicio do intervalo de tabuada deseja calcular para %i? ", numero);
scanf("%i", &interval);
printf("\nQual o final do intervalo de tabuada deseja calcular para %i? ", numero);
scanf("%i", &interval2);

while(interval>interval2){
printf("\nO intervalo final deve ser maior que o inicial\nDigite novamente: ");
scanf("%i", &interval2);
    }
printf("\nA tabuada do numero %i nos intervalos digitados e: \n", numero);
for(int i=interval; i<=interval2;i++){
        printf("\n%i x %i = %i\n",numero,i,numero*i);
    }
return 0;
}