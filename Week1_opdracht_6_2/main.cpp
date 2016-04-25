// template

#include <iostream>

#include "window.hpp"
#include "filledrectangle.hpp"
#include "graphical_image.hpp"

int main(int argc, char **argv){
   window w( 1920, 1080, 1 );
   graphical_image trein(w, 20);
   trein.draw();
   return 0;
}
