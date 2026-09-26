/***
 * Programa conversor de uma quantidade
 * em segundos para horas minutos e segundos
 * 
 * build:
 *     gcc -o horas -Wall horas.c
 */

 #include <stdio.h>

 #define SECS_PER_MIN 60
 #define MINS_PER_HOUR 60

 #define SECS_PER_HOUR (SECS_PER_MIN*MINS_PER_HOUR)

 int main() {
    int total_secs;

    printf("Indique a quantidade total de segundos: ");
    scanf("%d", &total_secs);

    int h, m, s, remaining;

    

    h = total_secs / SECS_PER_HOUR;

    // resto da divisão por 3600
    // remaining = total_secs - h * SECS_PER_HOUR;
    remaining = total_secs % SECS_PER_HOUR;

    m = remaining / MINS_PER_HOUR;
    s = remaining % SECS_PER_MIN;    // resto da divisão por 60

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s)!\n", 
        total_secs, h, m, s);


    return 0;
 }
 