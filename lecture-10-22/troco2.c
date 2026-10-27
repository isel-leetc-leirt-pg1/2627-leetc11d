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
	    printf("%d ", ncoins);
        if (ncoins == 1) {
            printf("moeda de ");
        }
        else {
            printf("moedas de ");
        }

        if (cents_value == 200) {
            printf("2 euros\n");
        }
        else if (cents_value == 100) {
            printf("1 euro\n");
        }
        else if (cents_value == 1) {
            printf("%d cêntimo\n", cents_value);
        }
        else {
            printf("%d cêntimos\n", cents_value);
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
 * de moedas.
 * Note que a moeda imediatamente mais baixa é obtido quase sempre dividindo
 * por 2 o valor da moeda acima
 */
int main() {
    int troco;
 
    printf("qual o troco em cêntimos? ");
    scanf("%d", &troco);

 
	
	/**
	 * int coin_value = 200;
	 * while(troco > 0) {
     *   troco = exchange_for(troco, coin_value);
     *   coin_value /= 2;
     *   // resolver excepção
     *   if (coin_value == 25) {
	 *		coin_value = 20;
	 *   }
     * }
	 */
   
 
    // Nesta versão usamos um array
    // para obter o valor facial das diferentes moedas
    
    int coin_values[] = {
		200, 100, 50, 20, 10, 5, 2, 1
	};
	int nvalues = sizeof(coin_values)/sizeof(int);
    
    for(int i=0; i < nvalues; ++i) {
        troco = exchange_for(troco, coin_values[i]);
    }
 
    return 0;
     
}
