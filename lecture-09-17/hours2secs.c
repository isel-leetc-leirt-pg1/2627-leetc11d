 #include <stdio.h>
 
 #define SECS_PER_MIN 60
 #define MINS_PER_HOUR 60

 #define SECS_PER_HOUR (SECS_PER_MIN*MINS_PER_HOUR)
 #define HOURS_PER_DAY 24

 int main() {
    int h, m, s;

    printf("Indique o valor horário (h m s): ");
    scanf("%d %d %d", &h, &m, &s);

    // validar o valor horário

    if (h < 0 || h >= HOURS_PER_DAY) {
        printf("hora inválida!\n");
    }
    else {
        if (m < 0 || m >= MINS_PER_HOUR ) {
            printf("minuto inválido!\n");
        }
        else {
            if (s < 0 || s >= SECS_PER_MIN) {
                printf("segundo inválido!\n");
            }
            else {
                int total_secs;
                total_secs = 
                    h*SECS_PER_HOUR + m* MINS_PER_HOUR + s;

                printf("o valor horario %dh:%dm:%ds corresponde a %d segundos\n",
                    h, m, s, total_secs);
            }
        }
    }
    
    return 0;
 }