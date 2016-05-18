#include <iostream>
#include <string>

class vector {
public:
   int x;
   int y; 
   vector operator+( const vector & rhs ) const;
   vector & operator+=( const vector & rhs );
   vector(int x, int y):
   x(x),
   y(y)
   {}
};

vector & vector::operator+=( const vector & rhs ){
   x += rhs.x;
   y += rhs.y;
   return *this;
}

vector vector::operator+( const vector & rhs ) const {
   vector temp = *this;
   temp += rhs;
   return temp;
}

std::ostream & operator<<( std::ostream & lhs, vector pos ){
lhs << "(" << pos.x << "," << pos.y << ")";
return lhs;
}

int main(int argc, char **argv){  
   return 0;
   vector a(5,4);
   vector b(5,3);
   a.operator +=(b);
   std::cout << a << "\n";
}
