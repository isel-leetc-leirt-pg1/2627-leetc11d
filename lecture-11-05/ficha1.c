#include <stdio.h>
#include <stdbool.h>

// o programa apresenta a soma dos algarismos pares do número de aluno
int ex1_main_v1() {
    int n = 61111; // coloque aqui o seu número de aluno
    int sum = 0;
    while(n > 0) {
    if ( (n % 10) % 2 == 0) {
        sum += n % 10;
    }
    n /= 10;
    }
    printf("sum=%d\n", sum);
    return 0;
}

// o programa apresenta a soma dos algarismos ímpares do número de aluno
int ex1_main_v2() {
    int n = 61111; // coloque aqui o seu número de aluno
    int sum = 0;
    while(n > 0) {
    if ( (n % 10) % 2 != 0) {
        sum += n % 10;
    }
    n /= 10;
    }
    printf("sum=%d\n", sum);
    return 0;
}

bool harshadNum(int n) {
    int norig = n, sum = 0;
    while (n > 0) {
        sum += n %10;
        n /= 10;
    }
    // retorna true se sum for divisor de norig
    return norig % sum == 0;
}

void prog_v1() {
    int limit, count = 0;

    printf("limite? ");
    scanf("%d", &limit);

    for(int n = 11; n <= limit; ++n) {
        if (harshadNum(n)) {
            count++;
        }
    }
    printf("total de números de harshad até %d é de %d\n", limit, count);
}

void prog_v2() {
    int count = 0;
    int n = 11;

    printf("os primeiros 100 números de harshad a partir de 11:\n");
    while (count < 100) {
        if (harshadNum(n)) {
            printf("%d\n", n);
            count++;
        }
        n++;
    }
}

int main() {
    prog_v2();
    return 0;
}