// template

#include <iostream>

#include "window.hpp"
#include "filledrectangle.hpp"
#include "graphical_image.hpp"

int main(int argc, char **argv){
   window w( 500, 500, 2 );
   graphical_image trein(w);
   trein.draw();
   return 0;
}
