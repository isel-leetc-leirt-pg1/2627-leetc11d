
#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 700

#define BALL_CLR c_red
#define BALL_RADIUS 20
#define BALL_CENTER_Y 300
#define BALL_CENTER_X (BALL_RADIUS)
#define BALL_DELTA 15

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

// funções oara criar e/ou modicar bolas

Ball ball_create(int cx, int cy, int r, int clr, int dx);
Ball ball_create_random(int x, int y);
Ball ball_move(Ball b);
void ball_draw(Ball b);
bool ball_contains(Ball b, int x, int y);

// funções sobre a coleção de bolas

int balls_find_at(int x, int y);
bool balls_remove_at(int x, int y);
void balls_move();
void balls_draw();
bool balls_add(Ball b);
    