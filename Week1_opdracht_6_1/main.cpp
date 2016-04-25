// template

#include <iostream>

#include "window.hpp"
#include "filledrectangle.hpp"

int main(int argc, char **argv){
   window w( 500, 500, 2 );
   
   filled_rectangle square(w, 300, 100, 400, 200);
   square.draw();

   filled_rectangle square2(w, 100, 100, 200, 200);
   square2.draw();
   
   filled_rectangle square3(w, 100, 300, 200, 400);
   square3.draw();
   
   filled_rectangle square4(w, 300, 300, 400, 400);
   square4.draw();   
   return 0;
}
