// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[])
{

// Declaração das variáveis
    float l1, l2, l3;

// Programação principal    
    printf("Digite o tamanho do lado 1:");
    scanf("%f",&l1);

    printf("\nDigite o tamanho do lado 2:");
    scanf("%f",&l2);

    printf("\nDigite o tamanho do lado 3:");
    scanf("%f",&l3);

// Análise dos valores    
if ( ((l1+l2) > l3) && ((l1+l3) > l2) && ((l2+l3) > l1)) {
    if ((l1 == l2) && (l1 == l3)) {
        printf("\nTriangulo Equilatero");
    }
    else if ((l1 != l2) && (l1 != l3)){
        printf("\nTriangulo Escaleno");
    }
    else { printf("\nTriangulo Isosceles"); }
}
  else { printf("\nNao e Triangulo"); }    
    return 0;
}