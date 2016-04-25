#ifndef FILLED_RECTANGLE_HPP
#define FILLED_RECTANGLE_HPP

#include "window.hpp"

class filled_rectangle {
private:
    window &w;
    int start_x;
    int start_y;
    int end_x;
    int end_y;
public:
    filled_rectangle(window &w, int p_start_x, int p_start_y, int p_end_x, int p_end_y);
    void draw();
};

#endif // FILLED_RECTANGLE_HPP