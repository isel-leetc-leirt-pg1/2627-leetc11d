#include <pg/pglib.h>


/**
 * movimenta uma bola ao ritmo dos eventos do timer
 * da biblioteca gráfica
 * Experimente mudar (aumentar e diminuir) o ritmo dos eventos de timer (TIMER_BASE)
 * Experimentar mudar o delta do movimento da bola (BALL_DELTA)
 * 
 **/
 
#define WINDOW_WIDTH 1000
#define WINDOWS_HEIGHT 700

// variáveis globais para a hora
int h = 0, m = 0, s = 0;

#define BALL_RADIUS 20
#define BALL_CENTER_Y 200
#define BALL_CENTER_X BALL_RADIUS
#define BALL_DELTA 40
#define BALL_CLR c_red
#define TIMER_BASE 40 // período eventos de timer em ms

// variáveis globais para a bola
const int bcy = BALL_CENTER_Y;
int bcx = BALL_CENTER_X;
int bdx = BALL_DELTA;
const RGB bcolor = BALL_CLR;
const int bradius = BALL_RADIUS;

/**
 * utilização preliminar do timer 
 * para apresentar um relógio digital
 * na consola de texto
 */
void clock_tick() {
 // tick do relógio
    s = s + 1;
    if (s == 60) {
        s = 0;
        m = m + 1;
        if (m == 60) {
            m = 0;
            h = (h +1) % 24;
        }
    }
    printf("%2d:%2d:%02d\r", h, m, s);
    fflush(stdout);
}

void ball_move() {
    bcx += bdx;
    if (bcx + bradius >= WINDOW_WIDTH) {
        bcx = WINDOW_WIDTH - bradius;
        bdx = -bdx;
    }
    else if (bcx < bradius) {
        bcx = bradius;
        bdx = -bdx;
    }
}

void ball_draw() {
    graph_circle(bcx, bcy, bradius, bcolor, true);
}

void erase_scene() {
    graph_rect(0, 0, WINDOW_WIDTH, WINDOWS_HEIGHT, c_white, true);
}


/**
 * função que processo eventos de timer
 */
void timer_handler() {
   erase_scene();
   ball_move();
   ball_draw();
}


int main() {
    graph_init2("Moving Ball", WINDOW_WIDTH, WINDOWS_HEIGHT);
   
    graph_regist_timer_handler(timer_handler, TIMER_BASE);
    graph_start();
}
