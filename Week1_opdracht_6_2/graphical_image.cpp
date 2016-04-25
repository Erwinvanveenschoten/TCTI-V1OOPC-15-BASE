
#include "graphical_image.hpp"
#include "filledrectangle.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "line.hpp"

void graphical_image::draw(){
    rectangle square(w, (10*trainsize), (10*trainsize), (70*trainsize), (40*trainsize));
    square.print();
    filled_rectangle raam1(w,20*trainsize,15*trainsize,30*trainsize,25*trainsize);
    raam1.draw();
    filled_rectangle raam2(w,40*trainsize,15*trainsize,50*trainsize,25*trainsize);
    raam2.draw();
    filled_rectangle raam3(w,60*trainsize,15*trainsize,70*trainsize,25*trainsize);
    raam3.draw();
    circle wheel1(w, 15*trainsize, 43*trainsize, 3*trainsize);
    wheel1.print();
    circle wheel2(w, 22*trainsize, 43*trainsize, 3*trainsize);
    wheel2.print();
    circle wheel3(w, 58*trainsize, 43*trainsize, 3*trainsize);
    wheel3.print();
    circle wheel4(w, 65*trainsize, 43*trainsize, 3*trainsize);
    wheel4.print();
    line antenna_diagonal1(w,30*trainsize,10*trainsize,25*trainsize,5*trainsize);
    antenna_diagonal1.print();
    line antenna_diagonal2(w,60*trainsize,10*trainsize,55*trainsize,5*trainsize);
    antenna_diagonal2.print();
    line antenna_horizontal1( w, 24*trainsize, 5*trainsize, 26*trainsize, 5*trainsize );
    antenna_horizontal1.print();
    line antenna_horizontal2( w, 54*trainsize, 5*trainsize, 56*trainsize, 5*trainsize );
    antenna_horizontal2.print();
}