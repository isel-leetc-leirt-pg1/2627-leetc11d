#include <pg/pglib.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

int main() {
    graph_init2("Hello Window", WINDOW_WIDTH, WINDOW_HEIGHT );
    RGB my_red = graph_rgb(128, 64, 64);
    graph_rect(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT, my_red, true);
    graph_start();
    return 0;
}