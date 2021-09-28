// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char const *argv[]){

// Declaração das variáveis
char sexo;

    printf("Digite F para feminino ou M para masculino\n");

    printf("Digite a letra do seu sexo: ");
    scanf("%s",&sexo);
  
while((toupper(sexo) != 'F') && (toupper(sexo) != 'M')){
    printf("\nSomente F ou M sao respostas validas \nDigite novamente o seu sexo: ");
    scanf("%s",&sexo);

}
    if(sexo == 'M'){
        printf("\nSexo aceito = Masculino\n");
        
    }
    else if (sexo == 'F'){
        printf("\nSexo aceito = Feminino\n");
    }
  
}