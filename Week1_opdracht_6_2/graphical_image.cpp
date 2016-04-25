
#include "graphical_image.hpp"
#include "filledrectangle.hpp"

graphical_image::graphical_image(window &w):
    w (w)
{}

void graphical_image::draw(){
  filled_rectangle square(w, 300, 100, 400, 200);
  square.draw();
}