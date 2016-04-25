#ifndef GRAPHICAL_IMAGE_HPP
#define GRAPHICAL_IMAGE_HPP

#include "window.hpp"

class graphical_image {
private:
    window &w;
public:
    graphical_image(window &w);
    void draw();
};

#endif // GRAPHICAL_IMAGE_HPP