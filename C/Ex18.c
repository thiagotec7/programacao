// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[])
{

// Programação principal
    float sexo, peso, altura, r;
    char feminino, masculino;
    printf("Digite o seu sexo (masculino ou feminino):");
    scanf("%s",&sexo);

    printf("\nDigite o seu peso (em kg):");
    scanf("%f",&peso);

    printf("\nDigite a sua altura (em m):");
    scanf("%f",&altura);

    r = peso / (altura*altura);

if (sexo = feminino) {

       printf("\nVoce esta ");

    if(r<19)
    {    
        printf("abaixo do peso");
    }
    else
    {
        if(r>=24)
        {
        printf("acima do peso");
        }
        else
        {
          printf("com o peso ideal");
        }
    }
}
else if (sexo = masculino) {

       printf("\nVoce esta ");

    if(r<20)
    {    
        printf("abaixo do peso");
    }
    else
    {
        if(r>=25)
        {
        printf("acima do peso");
        }
        else
        {
          printf("com o peso ideal");
        }
    }
}
    return 0;
}