#include <pg/pglib.h>
#include "utils.h"
#include "balls.h"

// máximo de bolas
#define MAX_BALLS 20

// array de bolas
Ball balls[MAX_BALLS];

// total de bolas presentes no array
int nballs = 0;


// funções sobre uma bola

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
 * cria uma bola com o centro recebido por parâmetro, e com caracterśticas aleatórias para:
 *    a cor, escolhida dentro de uma pallete de 7 cores
 *    o raio e o deslocamento em x e y, escolhidos dentreo do intervalo -5 a +5 do respetivo valor de referência
 *    Por exemplo, o raio deverá ser defindo dentro do intervalo [ BALL_RADIUS-5 .. BALL_RADIUS + 5]
 */
Ball ball_create_random(int x, int y) {
     Ball b = {0};
     // a implementar
     return b;
}

/**
 * desenha a bola na janela gráfica
 */
void ball_draw(Ball b) {
    graph_circle(b.cx, b.cy, b.radius, b.clr, true );
}


/**
 * retorna true se o ponto "x", "y" estiver contido na bola,
 * e false caso contrário
 */
bool ball_contains(Ball b, int x, int y) {
    // A implementar
    return false;
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


// funções sobre a colecção de bolas

/*
 * move todas as bolas
 */
void balls_move() {
     for(int i=0; i < nballs; ++i) {
        balls[i] = ball_move(balls[i]);
    }
}

/**
 * adiciona uma nova bola à colecção
 * se o array ainda não estiver cheio
 * retorna true se a adição foi bem sucedida, false caso contrário
 */
bool balls_add(Ball b) {
    if (nballs < MAX_BALLS) {
        balls[nballs++] = b;
        return true;
    }
    return false;
}

/**
 * desenha todas as bolas
 */
void balls_draw() {
     for(int i=0; i < nballs; ++i) {
        ball_draw(balls[i]);
    }
}

/**
 * procura no array "balls" a bola que contém o ponto "x", "y"
 * e retorna a sua posição.
 * se não existir nehuma bola retorna -1
 */
int balls_find_at(int x, int y) {
    // a implementar
    return -1;
}

/**
 * remove do array "balls" a bola que contem o ponto "x", "y"
 * Retorna true alguma bola foi removida, e false caso contrário
 */
bool balls_remove_at(int x, int y) {
    // a implementar
    return false;
     
}

