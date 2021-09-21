// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
float a, vi, t, vf;

printf("Digite a aceleracao (m/s2):");
scanf("%f", &a);
printf("\nDigite a velocidade inicial(m/s):");
scanf("%f", &vi);
printf("\nDigite o tempo do percurso (s):");
scanf("%f", &t);

vf = ((vi+(a*t))*3.6);

printf("\nVelocidade final em km/h: %.2f", vf);

if (vf<=40){
    printf("\nVeiculo muito lento");
}
if ((vf>40) && (vf<=60)){
    printf("\nVelocidade permitida");
}
if ((vf>60) && (vf<=80)){
    printf("\nVelocidade de cruzeiro");
}
if ((vf>80) && (vf<=120)){
    printf("\nVeiculo rapido");
}
if (vf>120){
    printf("\nVeiculo muito rapido");
}

return 0;
}