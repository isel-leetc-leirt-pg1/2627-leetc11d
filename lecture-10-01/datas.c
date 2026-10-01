#include <stdio.h>
#include <stdbool.h>

/**
 * verifica se um dado ano é bissexto
 * Parâmetros:
 *    year - o ano a verificar
 * Retorno:
 *    true se o ano "year" for bissexto, false caso contrário
 */
bool is_leap_year(int y) {
    return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}

/**
 * compara duas datas, data 1 e data 2, cada uma expressa na forma de três inteiros
 */
int date_cmp(int d1, int m1, int y1, int d2, int m2, int y2) {
    // primeiro comapara os anos
    
    int diff = y1 - y2;
    if (diff != 0) {
        return diff;
    }
    // se os anos forem iguais compara os meses
    diff = m1 - m2;
    if (diff != 0) {
        return diff;
    }

    // em último caso, compara os dias
    return d1 - d2;
}

int month_days(int m, int y) {
    int mdays;
    if (m == 2) {
        if (is_leap_year(y)) {
            mdays = 29;
        }
        else {
            mdays = 28;
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        mdays = 30;
    }
    else {
        mdays = 31;
    }
    return mdays;
}

void next_day(int day, int month, int year) {
    int day2 = day, month2 = month, year2 = year;

    day2 = day2 + 1;
    if (day2 > month_days(month2, year2) ) {
        day2 = 1;
        month2 = month2 + 1;
        if (month2 > 12) {
            month2 = 1;
            year2 = year2 + 1;
        }
    }
    printf("O dia seguinte a %d/%d/%d é %d/%d/%d\n",
             day, month, year, day2, month2, year2);
}


int main() {
    next_day(28, 2, 2002);
    next_day(31, 12, 2002);
    next_day(30, 4, 2010);
    next_day(31, 1, 2008);
    next_day(28, 2, 2020);
    next_day(3, 12, 2026);
    next_day(1, 10, 2026);

    return 0;
}