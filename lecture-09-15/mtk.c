/**
 * Programa conversor de milhas para Km
 * Construção:
 * 		gcc -o mtk -Wall mtk.c
 */

#include <stdio.h>

int main() {
    double miles, km;
    
    printf("milhas? ");
    scanf("%lf", &miles);

    km = miles*1.609344;

    printf("%.3lf milhas correspondem a %.3lf km!\n", miles, km);
    return 0;
}
