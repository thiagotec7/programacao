// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[], int **numeros, int i, int b, int n, int c, int a, int x, int linha, int coluna, int conf, char repete)
{
// Looping para definir o número de linhas e colunas da matriz
	printf ("Digite o numero de linhas: ");
	scanf ("%i", &n);
	
	while ((n<1) || (n>10))
		{
			printf ("\nInvalido! Insira um numero positivo e menor ou igual a 10:\n\n");
    		scanf ("%i", &n);
		}	
	
	printf ("\nDigite o numero de colunas: ");
	scanf ("%i", &c);
	
	while ((c<1) || (c>10))
		{
			printf ("\nInvalido! Insira um numero positivo e menor ou igual a 10:\n");
    		scanf ("%i", &c);
		}
		
	numeros = (int**)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	{
      numeros[i] = (int*)malloc(c*sizeof(int));
	}
  	conf=0;
  	repete='S';

// Looping para definir os valores da matriz
  printf("\n\nDigite os numeros para preencher a matriz de %i x %i:\n\n", n, c);
  
  for(i=0; i<n; i++)
 	 {
 	 	for(b=0; b<c; b++)
 	 	{
    		scanf("%i", &numeros[i][b]); 	 		
		}
	 }
  printf("\nOs numeros digitados na matriz foram:\n\n");
  for(i=0; i<n; i++)
  {
        for(b=0; b<c; b++)
		{
        	printf("%i ", numeros[i][b]);
      	}
      printf("\n");
  }
// Looping para localizar um valor dentro da matriz
while (repete=='S') 
{
	printf("\n\nEm qual posicao se encontra o numero: ");
	scanf ("%i", &x);
    for(i=0; i<n; i++)
 	 {
 	 	for(b=0; b<c; b++)
 	 	{
      		if (numeros[i][b]==x)
      		{
      			linha=i+1;   
      			coluna=b+1;
      			conf=1;
      			break;      	
	  		}
     	}
 	 }
  	if (conf==1)
  	{
  		printf("\n\nO numero %d se encontra na linha %i e coluna %i\n", x, linha, coluna);
		repete='N';
	}
	else
	{
		printf("\n\nO numero %d nao foi encontrado na matriz!", x); 
		printf("\n\nDeseja encontrar um outro valor? (S-Sim) (N-Nao)\n"); 
		scanf ("%s", &repete);
		while (repete!='S' && repete!='N')
		{
			printf ("\nInvalido!\nDigite (S-Sim) (N-Nao): ");
			scanf ("%s", &repete);	
		}
	}  
}

  return 0;
}