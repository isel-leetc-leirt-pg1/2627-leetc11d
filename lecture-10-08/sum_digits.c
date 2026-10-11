#include <stdio.h>

/**
 * Esta função retorna a soma dos algarismos de um número inteiro positivo
 */
int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum = sum  + n % 10;
        n = n / 10;
    }
  
    return sum;
}

int main() {
    int v;

    printf("indique o valor: ");
    scanf("%d", &v);
    int sd = sum_digits(v);
    printf("A soma dos algarismos de %d é %d\n", v, sd);
    return 0;
}
