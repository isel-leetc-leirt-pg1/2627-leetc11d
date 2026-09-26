#include <stdio.h>

/**
 * Determina o maior entre dois inteiros
 * Parâmetros:
 *    i1: primeiro inteiro
 *    i2: segundo inteiro
 * Retorno:
 * 		O maior dos dois dvalores inteiros
 */
int max(int i1, int i2) {
	if (i1 > i2) {
		return i1;
	}
	else {
		return i2;
	}
}

/**
 * Determina o maior entre três inteiros
 * Parâmetros:
 *    i1: primeiro inteiro
 *    i2: segundo inteiro
 *    i3: segundo inteiro
 * Retorno:
 * 		O maior dos três dvalores inteiros
 */
int max3(int i1, int i2, int i3) {
	 return max( max(i1, i2), i3);
}

int main() {
	int i1, i2;
	
	printf("indique dois inteiros (i1 e i2): ");
	scanf("%d %d", &i1, &i2);
	printf("o maior valor entre i1 (%d) e i2(%d) é: %d\n", i1, i2, max(i1,i2));
	
	int i3;
	printf("Indique um terceiro valor inteiro (i3): ");
	scanf("%d", &i3);
	
	printf("o maior valor entre i1(%d), i2(%d) i3(%d) é : %d\n", i1, i2,i3,  max3(i1,i2,i3));
	return 0;
}
	






