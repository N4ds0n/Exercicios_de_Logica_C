#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome[256];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("\nQual sua idade?\n");
    scanf("%d", &idade);

    printf("Nome: %s\nIdade: %d", nome, idade);

    printf("\nAguarde enquanto validamos seus dados...\n");

    printf("A primeira letra do seu nome eh: %c\n", nome[0]);

    if(idade >= 18){
        printf("Pela sua idade, voce eh um adulto\n");
    } else if(idade >= 12){
        printf("Pela sua idade, voce eh um adolescente\n");
    } else {
        printf("Pela sua idade, voce eh uma crianca\n");
    }

    return 0;
}