#include <pg/pglib.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

#define BOARD_X 50
#define BOARD_Y 30
#define CELL_SIDE 60
#define NCELLS 8
#define BOARD_SIDE (CELL_SIDE*NCELLS)

/**
 * Desenha um tabuleiro de xadrez na janela gráfica
 * O tabuleiro nesta versão não fica bem deçlimitado
 * Como se pode corrigir isso?
 */
void draw_board() {
    int x, y = BOARD_Y;

    for (int i=0; i < NCELLS; ++i) {
        x= BOARD_X;
        for (int j=0; j < NCELLS; ++j) {
            RGB cell_clr;
            if ((i + j) % 2 == 0) {
                cell_clr = c_white;
            }
            else {
                cell_clr = c_black;
            }
            graph_rect(x, y, CELL_SIDE, CELL_SIDE, cell_clr, true);
            x += CELL_SIDE;
        }
        y += CELL_SIDE;
    }
    graph_rect(BOARD_X, BOARD_Y, BOARD_SIDE, BOARD_SIDE, c_black, false);
}
int main() {
    graph_init2("Hello Window", WINDOW_WIDTH, WINDOW_HEIGHT );
    draw_board();
    graph_start();
    return 0;
}
