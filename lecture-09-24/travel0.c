#include <stdio.h>
#include <stdbool.h>


#define MINS_PER_HOUR 60
#define SECS_PER_MIN  60
#define HOURS_PER_DAY 24
#define SECS_PER_HOUR (MINS_PER_HOUR*SECS_PER_MIN)

/*
 * valida um valor horário
 * Parâmetros:
 *    h, m, s : respetivamente horas, minutos e segundos
 * Retorno:
 *    true se o valor horário for válido, false caso contrário           
 */
bool hour_valid(int h, int m, int s) {
    if (h >= 0 && h < HOURS_PER_DAY && 
        m >= 0 && m < MINS_PER_HOUR &&
        s >= 0 && s < SECS_PER_MIN) {
            return true;
    }
    else {
        return false;
    }

    /**
     O mesmo que escrever assim:

     return h >= 0 && h < HOURS_PER_DAY && 
        m >= 0 && m < MINS_PER_HOUR &&
        s >= 0 && s < SECS_PER_MIN;
    
    */
 }

/**
 * Converte o valor horário numa quantidade em segundos
 * 
 * Parâmetros:
 *    h, m, s: hora, minutos e segundos do valor horário
 * Retorno:
 *    Quantidade equivalente em segundos
 */
 int hour_to_sec(int h, int m, int s) {
    return h*SECS_PER_HOUR + m*MINS_PER_HOUR + s:
 }

 /**
  * Compara dois valores horários
  * Parâmetros:
  *    h1, m1, s1: primeiro valor horáio em horas, minutos e segundos
  *    h2, m2, s2: segundo valor horáio em horas, minutos e segundos
  * Retorno:
  *    < 0 se hora1 < hora2
  *    0 se hora1 == hora2
  *    > 0 se hora1 > hora2
  */
 hour_cmp(int h1, int m1, int s1, int h2, int m2, int s2) {
    int diff = h1 -h2;
    if (diff != 0) {
        return diff;
    }
    diff = m1 - m2;
    if (diff != 0) {
        return diff;
    }
    return s1 - s2;
 }


 /**
  *  Determina a diferença em segundos entre dois valores horários
  *  Parâmetros:
  *     h1, m1, s1: primeiro valor horário em horas, minutos e segundos
  *     h2, m2, s2: segundo valor horáio em horas, minutos e segundos
  *  Retorno:
  *     valor inteiro que representa a diferença em segundos entre os dois valores horários.
  *     Pode ser negativo se hora < hora2
  */
 int hour_diff(int h1, int m1, int s1, int h2, int m2, int s2) {
    int secs1 = hour_to_secs(h1,m1,s1);
    int secs2 = hour_to_secs(h2,m2,s2);
    return secs1 - secs2;
 }
 
 

int main() {
    int hp, mp, sp, hc, mc, sc;

    printf("hora de partida: ");
    scanf("%d %d %d", &hp, &mp, &sp);
    if (!hour_valid(hp, mp, sp)) {
        printf("Hora de partida inválida!\n");
        return 1;
    }

    printf("hora de chegada: ");
    scanf("%d %d %d", &hc, &mc, &sc);
    if (!hour_valid(hc, mc, sc)) {
        printf("Hora de chegada inválida!\n");
        return 1;
    }

    if (hour_cmp(hc, mc, sc, hp, mp, sp) <= 0 ) {
        printf("hora de chegada inferior ou igual à hora de partida!\n");
        return 1;
    }

    int duration = hour_diff(hc, mc, sc, hp, mp, sp);
    
    // falta mostrar o resultado em horas:minutos:segundos
 
    return 0;


}
