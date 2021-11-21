// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
int quant, a, numero, soma;

// Programa principal
printf ("Digite um numero positivo menor do que 100: ");
scanf ("%i", &quant);
	
while ((quant<0) || (quant>100)){
	printf ("\nErro! Insira um numero positivo menor do que 100: ");
	scanf ("%i", &quant);
}	
numero=2;
soma=3;

for (a=1; a<=quant; a++){
	printf ("\n%i",numero);		
	numero=numero+soma;
	soma=soma+2;
}	
return 0;
}