/**
 * coloca uma nova bola na arena 
 * na posição do rato, quando se prime o seu botão esquerdo,
 * até máximo de MAX_BALLS
 * 
 * Comando para construir o executável: gcc -o balls -Wall ball.c -lpg
 * 
 */

#include <pg/pglib.h>
#include <stdbool.h>
#include "utils.h"
#include "balls.h"

 
 
/**
 * apaga a cena anterior, desenhando rectângulo 
 * que preenche a branco a janela gráfica
 */
void clear_scene() {
	graph_rect(0,0, WINDOW_WIDTH, WINDOW_HEIGHT, c_white, true);
}

/**
 * função que processa os eventos de timer
 * Move as bolas e apresenta-as na nova posição
 */
void timer_handler() {
    clear_scene();
    balls_move();
    balls_draw(); 
}

/**
 * função que processsa os eventos de rato
 */
void mouse_handler(MouseEvent me) {
    if (me.type == MOUSE_BUTTON_EVENT && 
        me.state == BUTTON_PRESSED) {
        if (me.button == BUTTON_LEFT) {
            Ball b = ball_create_random(me.x, me.y);
            balls_add(b);
        }
        else if (me.button == BUTTON_RIGHT) {
            balls_remove_at(me.x, me.y);
        }
    }
}

/**
 * função que processsa os eventos de teclado
 */
void kbd_handler(KeyEvent ke) {
     // a implementar
}

int main() {
    random_init();
    graph_init2("Moving Ball", WINDOW_WIDTH, WINDOW_HEIGHT);
    graph_regist_timer_handler(timer_handler, TIMEBASE);
    graph_regist_mouse_handler(mouse_handler);
    graph_regist_key_handler(kbd_handler);
    graph_start();
}
