#include <stdio.h>

/**
 * Apresenta o número de moedas de valor "cents_value"
 * que tenham de ser entregues para satisfazer o troco "exchange".
 * Não escreve nada na consola caso o valor a entregar seja 0.
 * Desafio:
 *  Altere a apresentação para resolver corretamento todos os caso
 *  Por exemplo , "1 moeda de 1 euro" em vez de "1 moedas de 1 euros"
                  "1 moeda de 1 cêntimo" em vez de "1 moedas de 1 cêntimos"
 * Parâmetros:
 *   "cents_value": o valor da moeda a entregar
 * Retorna:
 *   O troco restante, após a entrega das moedas de valor "cents_value"
 */
int exchange_for(int exchange, int cents_value) {
    int ncoins = exchange / cents_value;
    if (ncoins > 0) {
        printf("%d moedas de %d",  ncoins, cents_value);
        if (cents_value >= 100) {
            printf(" euros\n");
        }
        else {
            printf(" cêntimos\n" );
        }
    }
    return exchange % cents_value;
}

/*
 * O troco é apresentado 
 * invocando a função exchange_for para todos
 * os valores de moeda possíveis, começando do valor mais elevado
 * 
 * Tente alterar para usar ciclos, de forma a evitar
 * a chamada manual e exchange_for para todos os valores possíveis
 * de moedas
 * Note que a moeda imediatamente mais baixa é obtido quase sempre dividindo
 * por 2 o valor da moeda acima
 */
int main() {
    int troco;

    printf("qual o troco em cêntimos? ");
    scanf("%d", &troco);

    troco = exchange_for(troco, 200);
    troco = exchange_for(troco, 100);
    troco = exchange_for(troco, 50);
    troco = exchange_for(troco, 20);
    troco = exchange_for(troco, 10);
    troco = exchange_for(troco, 5);
    troco = exchange_for(troco, 2);
    exchange_for(troco, 1);
    return 0;
}