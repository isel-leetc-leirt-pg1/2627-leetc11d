
/**
 * A função recursiva "echo_reverse"
 * apresenta de forma invertida a sequência de inteiros,
 * terminada por 0, lida do input
 * 
 * build: gcc -o echo_reversed -Wall echo_reversed.c
 * 
 * execute usando o comando:
 * 
 * echo_reversed < numbers_in.txt > numbers_out.txt
 * 
 * Observe o conteúdo do ficheiro numbers_out.txt
 * usando o comando: cat numbers_out.txt
 * 
 */

#include <stdio.h>



void echo_reverse() {
    int num;
    scanf("%d", &num);
    if (num != 0) {
        echo_reverse();
        printf("%d\n", num);
    }
}

int main() {
    echo_reverse();
    return 0;
}
