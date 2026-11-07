#include <pg/pglib.h>
#include "utils.h"

#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 700

#define FORM_START_MIN_X -FORM_MIN_SIDE
#define FORM_START_MAX_X WINDOW_WIDTH

#define FORM_START_MIN_Y -FORM_MIN_SIDE
#define FORM_START_MAX_Y WINDOW_HEIGHT

#define FORM_MIN_SIDE 20 
#define FORM_MAX_SIDE 160

RGB rand_color() {
    // To complete
    return c_red;
}

#define CIRCLE_TYPE 1
#define RECT_TYPE 2
#define LINE_TYPE 3
#define TRIANGLE_TYPE 4

int random_form_type() {
	int types[] = { CIRCLE_TYPE, CIRCLE_TYPE, CIRCLE_TYPE,
        RECT_TYPE, RECT_TYPE, RECT_TYPE, RECT_TYPE, 
        TRIANGLE_TYPE, TRIANGLE_TYPE, LINE_TYPE};
    int types_size = sizeof(types)/sizeof(types[0]);

    return types[random_range(0, types_size-1)];
}

void paint_random_form() {
    int x = random_range(FORM_START_MIN_X, FORM_START_MAX_X);
    int y = random_range(FORM_START_MIN_Y, FORM_START_MAX_Y);
  
    int clr = rand_color();
    int type = random_form_type();

    switch(type) {
        case RECT_TYPE:
            int w = random_range(FORM_MIN_SIDE, FORM_MAX_SIDE);
            int h = random_range(FORM_MIN_SIDE, FORM_MAX_SIDE);
            graph_rect(x, y, w, h, clr, true);
            break;

        default:
			break;
    }
}

void do_paint() {
    const int nforms = 300;
    
    for (int i = 0 ; i < nforms; ++i) {
        paint_random_form();
    }
}

int main() {
    random_init();
    graph_init2("Random Paint", WINDOW_WIDTH, WINDOW_HEIGHT);
    do_paint();
    graph_start();
}
