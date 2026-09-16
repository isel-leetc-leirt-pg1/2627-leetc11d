/***
 * Programa conversor de uma quantidade
 * em segundos para horas minutos e segundos
 * 
 * build:
 *     gcc -o horas -Wall horas.c
 */

 #include <stdio.h>

 int main() {
    int total_secs;

    printf("Indique a quantidade total de segundos: ");
    scanf("%d", &total_secs);

    int h, m, s, remaining;

    h = total_secs / 3600;

    // resto da divisão por 3600
    // remaining = total_secs - h * 3600;
    remaining = total_secs % 3600;

    m = remaining / 60;
    s = remaining % 60;    // resto da divisão por 60

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s)!\n", 
        total_secs, h, m, s);


    return 0;
 }
 