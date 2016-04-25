#include "window.hpp"
#include "filledrectangle.hpp"

void filled_rectangle::draw(){
    for (int x = start_x; x <= end_x; x++){
        for (int y = start_y; y <= end_y; y++)
            w.draw(x,y);
    }
}