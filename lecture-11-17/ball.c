#include <pg/pglib.h>
 

#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 700

#define BALL_CLR c_red
#define BALL_RADIUS 20
#define BALL_CENTER_Y 300
#define BALL_CENTER_X (BALL_RADIUS)
#define BALL_DELTA 20

#define TIMEBASE 40 // em ms, apresenta assim 25 imagens por segundo

/**
 * novo tipo cujas instâncias
 * representam bolas a deslocar-se na janela gráfica
 * A utilização de "typedef" permite usar o nome "Ball" para o tipo,
 * em vez de "struct ball"
 */
typedef struct ball {
    int cx, cy; // coordenadas do centro
    int radius; // raio
    RGB clr;    // cor
    int dx, dy; // deslocamento da bola em cada passo
} Ball;

//typedef struct ball Ball;

//struct ball b1;
//Ball ball, ball2;

#define MAX_BALLS 20

// array de bolas
Ball balls[MAX_BALLS];
// total de bolas presentes no array
int nballs = 0;

/**
 * Constrói e retorna uma nova Bola
 * com as características passadas por parâmetro
 */
Ball ball_create(int cx, int cy, int r, int clr, int dx) {
	// Uma variável de tipo estrutura pode ser criada
	// como é mostrado a seguir.
	// A alternativa seria criar uma variável não iniciada,
	// e depois iniciá-la da forma mostrada em comentário
    Ball b = {
        .cx = cx,
        .cy = cy,
        .radius = r,
        .clr = clr,
        .dx = dx,
        .dy = BALL_DELTA
    };
 /*    
  * Ball b;
  * b.cx = cx;
    b.cy = cy;
    b.radius = r;
    b.clr = clr;
    b.dx = BALL_DELTA;
    b.dy = 0; 
  */
    return b;
}

/**
 * desloca a bola "b" do deslocamento em x e y 
 * indicado na bola
 * Retorna a bola com a alteração efetuada
 */
Ball ball_move(Ball b) {
	// deslocar em x
    b.cx += b.dx;
    if (b.cx >= WINDOW_WIDTH - BALL_RADIUS) {
        b.cx = WINDOW_WIDTH - BALL_RADIUS;
        b.dx =  -b.dx;
    }
    else if (b.cx <= BALL_RADIUS) {
        b.cx = BALL_RADIUS;
        b.dx =  -b.dx;
    }
  
    // deslocar em y
    b.cy += b.dy;
    if (b.cy >= WINDOW_HEIGHT - BALL_RADIUS) {
        b.cy = WINDOW_HEIGHT - BALL_RADIUS;
        b.dy =  -b.dy;
    }
    else if (b.cy <= BALL_RADIUS) {
        b.cy = BALL_RADIUS;
        b.dy =  -b.dy;
    }
    return b;
}

/**
 * desenha a bola na janela gráfica
 */
void ball_show(Ball b) {
    graph_circle(b.cx, b.cy, b.radius, b.clr, true );
}

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
    for(int i=0; i < nballs; ++i) {
        balls[i] = ball_move(balls[i]);
        ball_show(balls[i]);
    }
   
}

/**
 * função que processsa os eventos de teclado
 */
void mouse_handler(MouseEvent me) {
    if (me.type == MOUSE_BUTTON_EVENT && 
        me.state == BUTTON_PRESSED && 
        me.button == BUTTON_LEFT) {
        if (nballs < MAX_BALLS) {
			balls[nballs] = ball_create(me.x, me.y, BALL_RADIUS, BALL_CLR, BALL_DELTA);
			++nballs; 
        }
    }
}

int main() {
   // ball = ball_create(BALL_CENTER_X, BALL_CENTER_Y, BALL_RADIUS, BALL_CLR, BALL_DELTA);
   // ball2 = ball_create(BALL_CENTER_X*2, BALL_CENTER_Y+10, BALL_RADIUS+5, c_blue, BALL_DELTA+5);
    graph_init2("Moving Ball", WINDOW_WIDTH, WINDOW_HEIGHT);
    graph_regist_timer_handler(timer_handler, TIMEBASE);
    graph_regist_mouse_handler(mouse_handler);
    graph_start();
}
