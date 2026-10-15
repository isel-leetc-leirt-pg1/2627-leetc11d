#include <stdio.h>

/**
 * calcula e retorna o total de algarismos do
 * número receido no parâmetro "n"
 */
int ndigits(int n) {
	// para resolver o caso particular de n ser 0
	if (n == 0) {
		return 1;
	}
	int nd= 0;
	while (n > 0) {
		nd++;
		n /= 10;
	}
	return nd;
}

/**
 * O mesmo que a função anterior, mas agora
 * usando a instrução do-while
 */
int ndigits2(int n) {
	 
	int nd= 0;
	do { 
		nd++;
		n /= 10;
	}
	while (n > 0);
	return nd;
}


int main() {
	printf("ndigits(0) = %d\n", ndigits(0));
	printf("ndigits2(0) = %d\n", ndigits2(0));
	printf("ndigits(374) = %d\n", ndigits(374));
	printf("ndigits2(374) = %d\n", ndigits2(374));
	return 0;
}
