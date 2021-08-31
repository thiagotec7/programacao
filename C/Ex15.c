// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[])
{

// Programação principal
    float peso, altura, r;
    printf("Digite o seu peso (em kg):");
    scanf("%f",&peso);

    printf("\nDigite a sua altura (em cm):");
    scanf("%f",&altura);

    r = peso / (altura*altura);

       printf("\nVoce esta ");

    if(r>20)
    {    
        printf("abaixo do peso");
    }
    else
    {
        if(r>25)
        {
        printf("acima do peso");
        }
        else
        {
          printf("com o peso ideal");
        }
    }
    return 0;
}