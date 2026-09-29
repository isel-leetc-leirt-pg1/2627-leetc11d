#include <stdio.h>

/**
 * Calcula a tabuada do número dado (entre 1 e 10),
 * sem usar ciclos
 * 
 * Parâmetros:
 *    n - valor para o qual se pretende calcular a tabuada
 * Retorno:
 *    não tem
 */
void tabuada0(int n) {
    if (n < 1 || n > 10) {
        printf("apenas para tabuadas entre 1 e 10\n");
    }
    else {
        printf("%d x  1 = %3d\n", n, n*1);
        printf("%d x  2 = %3d\n", n, n*2);
        printf("%d x  3 = %3d\n", n, n*3);
        printf("%d x  4 = %3d\n", n, n*4);
        printf("%d x  5 = %3d\n", n, n*5);
        printf("%d x  6 = %3d\n", n, n*6);
        printf("%d x  7 = %3d\n", n, n*7);
        printf("%d x  8 = %3d\n", n, n*8);
        printf("%d x  9 = %3d\n", n, n*9);
        printf("%d x 10 = %3d\n", n, n*10);
    }  
}

/**
 * Calcula a tabuada do número dado (entre 1 e 10),
 * sem usar ciclos
 * 
 * Parâmetros:
 *    n - valor para o qual se pretende calcular a tabuada
 * Retorno:
 *    não tem
 */
void tabuada(int n) {
    if (n < 1 || n > 10) {
        printf("apenas para tabuadas entre 1 e 10\n");
    }
    else {
        int m = 1;
        while( m <= 10) {
            printf("%d x %2d = %3d\n", n, m, n*m);
            m = m + 1;
        }
    } 
}

int main() {
    int n;

    printf("qual a tabuada que pretende (de 1 a 10)? ");
    scanf("%d", &n);
    tabuada(n);
    return 0;
}