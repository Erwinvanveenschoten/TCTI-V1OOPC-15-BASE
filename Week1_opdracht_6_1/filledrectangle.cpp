#include "window.hpp"
#include "filledrectangle.hpp"

filled_rectangle::filled_rectangle(window &w, int p_start_x, int p_start_y, int p_end_x, int p_end_y):
    w(w),
    start_x (p_start_x),
    start_y (p_start_y),
    end_x (p_end_x),
    end_y (p_end_y)
{}

void filled_rectangle::draw(){
    for (int x = start_x; x <= end_x; x++){
        for (int y = start_y; y <= end_y; y++)
            w.draw(x,y);
    }
}