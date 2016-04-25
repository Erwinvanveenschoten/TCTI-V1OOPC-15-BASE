#ifndef GRAPHICAL_IMAGE_HPP
#define GRAPHICAL_IMAGE_HPP

#include "window.hpp"

class graphical_image {
private:
    window &w;
    int trainsize;
public:
    graphical_image(window &w, int trainsize):
    w (w),
    trainsize (trainsize)
{}
    void draw();
};

#endif // GRAPHICAL_IMAGE_HPP