// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
 float num1, num2, num3;

// Programação principal
    printf("Digite o primeiro numero:");
    scanf("%f", &num1);

    printf("\nDigite o segundo numero:");
    scanf("%f",&num2);

    printf("\nDigite o terceiro numero:");
    scanf("%f",&num3);

    // Comparação dos valores obtidos
    printf("\nO maior numero e: ");

    if(num1>num2)
    {
      if(num1>num3)
        {
        printf("%.0f",num1);
        }
      else
        {
        printf("%.0f",num3);
        }
    }
    else
    {
        if(num2>num3)
        {
        printf("%.0f",num2);
        }
        else
        {
          printf("%.0f",num3);
        }
    }
    return 0;
}