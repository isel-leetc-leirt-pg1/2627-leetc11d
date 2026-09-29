#include <stdio.h>


int main() {
    int troco;

    printf("qual o troco em cêntimos? ");
    scanf("%d", &troco);

    int ncoins;

    ncoins = troco / 200;
    if (ncoins > 0) {
        printf("%d moedas de 2 euros\n", ncoins);
    }
    troco = troco % 200;

    ncoins = troco / 100;
    if (ncoins > 0) {
        printf("%d moedas de 1 euro\n", ncoins);
    }
    troco = troco % 100;

    ncoins = troco / 50;
    if (ncoins > 0) {
        printf("%d moedas de 50 cêntimos\n", ncoins);
    }
    troco = troco % 50;

    ncoins = troco / 20;
    if (ncoins > 0) {
        printf("%d moedas de 20 cêntimos\n", ncoins);
    }
    troco = troco % 20;

    ncoins = troco / 10;
    if (ncoins > 0) {
        printf("%d moedas de 10 cêntimos\n", ncoins);
    }
    troco = troco % 10;

    ncoins = troco / 5;
    if (ncoins > 0) {
        printf("%d moedas de  5 cêntimos\n", ncoins);
    }
    troco = troco % 5;

    ncoins = troco / 2;
    if (ncoins > 0) {
        printf("%d moedas de 2 cêntimos\n", ncoins);
    }
    troco = troco % 2;
    if (troco > 0) {
        printf("%d moedas de 1 cêntimos\n", troco);
    }


}