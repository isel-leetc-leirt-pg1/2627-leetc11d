#include <stdio.h>

int main() {
	char moedas [][10] = {
		"dois",
		"um",
		"cinquenta",
		"vinte",
		"dez",
		"cinco",
		"dois",
		"um"
	};
	
	int moedas_size = sizeof(moedas);
	
	printf("sizeof(moedas)=%d\n", moedas_size);
	
	return 0;
}
