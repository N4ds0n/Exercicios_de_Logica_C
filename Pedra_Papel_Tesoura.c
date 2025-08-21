#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Treino de Lógica de Programação criando um jogo de Pedra, Papel e Tesoura.

    char player[256];
    char player2[256];

    printf("Player 1, sua vez... ");
    scanf("%s", player);

    printf("\nPlayer 2, sua vez... ");
    scanf("%s", player2);

    printf("\nO Player 1 jogou %s e o Player 2 jogou %s", player, player2);

    printf("\nAguarde enquanto calculamos o resultado...\n");
    if(strcmp(player, "Papel") == 0){

                if(strcmp(player2, "Papel") == 0){

                printf("Empate!\n");

            } else if(strcmp(player2, "Tesoura") == 0){

                printf("O Player 2 venceu, pois tesoura corta o papel\n");

            } else if(strcmp(player2, "Pedra") == 0){

                printf("O Player 2 perdeu, pois papel ganha da pedra\n");
                
            } else{
                printf("Jogada invalida!\n");
            }


    } else if(strcmp(player, "Tesoura") == 0){

        if(strcmp(player2, "Papel") == 0){

                printf("O Player 1 venceu, pois a tesoura corta o papel\n");

            } else if(strcmp(player2, "Tesoura") == 0){

                printf("Empate!\n");

            } else if(strcmp(player2, "Pedra") == 0){

                printf("O Player 2 perdeu, pois a pedra quebra a tesoura\n");
                
            } else{
                printf("Jogada invalida!\n");
            }

    } else if(strcmp(player, "Pedra") == 0){

        if(strcmp(player2, "Papel") == 0){

                printf("O Player 1 perdeu, pois o papel vence a pedra\n");

            } else if(strcmp(player2, "Tesoura") == 0){

                printf("O Player 1 venceu, pois a pedra quebra a tesoura\n");

            } else if(strcmp(player2, "Pedra") == 0){

                printf("Empate!\n");
                
            } else{
                printf("Jogada invalida!\n");
            }

    } else{
        printf("Jogada invalida!\n");
    }

    return 0;
}