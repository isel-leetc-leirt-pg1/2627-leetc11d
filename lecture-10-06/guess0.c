/**
 * Este programa é um jogo em que o utilizador tenta adivinhar um número 
 * dentro de um intervalo, usando um nṹmero limitado de tentativas.
 * 
 * O ficheiro utils.c contém as funções random_range, usada para produzir
 * um valor aleatório dentro de um intervalo, e "random_init" para 
 * produzir uma nova semente para o gerador.
 * 
 * Comando de compilação: gcc -o guess0 -Wall guess0.c utils.c
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include <stdbool.h>

#define MAX_NUM 100
 
int game(int max_tries) {
    int ntries = 0;
    int secret = random_range(1, 100);

    while( ntries < max_tries) {
        int curr_try;

        ntries = ntries + 1;
        printf("tentativa %d: ", ntries);
        scanf("%d", &curr_try);

        if (secret > curr_try) {
            printf("o segredo é maior!\n");
        }
        else if (secret < curr_try) {
             printf("o segredo é menor!\n");
        }
        else {
           return ntries; 
        }
    
    }

    return -1;
}

int main() {
    int max_tries;

    random_init();
    
    printf("max. tentativas? ");
    scanf("%d", &max_tries);

   
    int res = game(max_tries);

    if (res < 0) {
        printf("perdeu! Talvez para a próxima\n");
    }
    else {
        printf("parabéns! venceu o jogo em %d tentativas\n", res);
    }
         
   

    printf("até à próxima!\n");
    return 0;
   
}
