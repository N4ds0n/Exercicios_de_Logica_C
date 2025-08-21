#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int hora_cinema = 20;
    int hora_atual = 20;

    //Posso entrar no cinema?
    if(hora_atual >= hora_cinema + 30){
        printf("Passou do tempo limite, não pode entrar no cinema");
    } else if(hora_atual < hora_cinema - 30){
        printf("Nem abriu a porta do cinema");
    } else{
        printf("O Horario esta certo, pode entrar no cinema");
    }
}