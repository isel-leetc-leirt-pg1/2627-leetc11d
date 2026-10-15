#include <stdio.h>

/**
 * apresenta uma linha na consola com "nspaces" espaços iniciais 
 * e "nstars" caracteres asterisco
 */
void line(int nspaces, int nstars) {
	int j = 0;
	while (j < nspaces) {
		printf(" ");
		j++;
	}
	j = 0;
	while(j < nstars) {
		printf("*");
		j++;
	}
}


/**
 * usa a funcão "line" para apresentar um
 * triângulo de asteriscos com altura "h" e com
 * o formato (para altura 4):
 *     *
 *    **
 *   ***
 *  ****
 * 
 */ 
void triangle(int h) {
	int i=0;
	while (i < h) {
		line(h - i - 1, i + 1);
		++i;
		printf("\n");
	}
}

/**
 *  Nova versão, agora com variáveis
 * que explicitamente indicam o total 
 * de espaços e asteriscos a apresentar em cada linha
 */ 
void triangle2(int h) {
	int i= 0;
	int nspaces = h-1;
	int nstars = h - nspaces;
	while (i < h) {
		line(nspaces, nstars);
		nspaces--;
		nstars++;
		++i;
		printf("\n");
	}
}

/**
 * Nova versão sem utilizar a função "line"
 */
void triangle3(int h) {
	int i=0;
	while (i < h) {
		int j = 0;
		while (j < h - i - 1) {
			printf(" ");
			j++;
		}
		j = 0;
		while(j < i + 1) {
			printf("*");
			j++;
		}
		++i;
		printf("\n");
	}
}

void triangle4(int h) {
	for (int i=0; i < h; ++i) {
		for(int j = 0; j < h - i -1; ++j) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	triangle(4);
	printf("\n");
	triangle2(5);
	printf("\n");
	triangle3(6);
	printf("\n");
	triangle3(7);
	return 0;
}
