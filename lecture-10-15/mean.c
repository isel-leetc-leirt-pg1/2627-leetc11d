#include <stdio.h>
#include <stdbool.h>

int main() {
	int sum = 0;
	int total = 0;
	int curr = 0;
	bool terminate = false;
	
	printf("Indique uma seqência de inteiros terminada por um número negativo: ");
	do {
		int res = scanf("%d", &curr);
		if ( res == 1 && curr >= 0) {
			sum += curr;
			total++;
		}
		else {
			terminate = true;
		}
			
	}
	while (!terminate);
	
	printf("foram lidos %d inteiros com sucesso\n", total);
	printf("a média é : %lf\n",  sum / total);
	
	return 0;
}
	
	
