#include <vector.hpp>
#include <ostream>
#include "catch_with_main.hpp"

std::ostream & operator<<( std::ostream & lhs, vector pos ){
lhs << "(" << pos.x << "," << pos.y << ")";
return lhs;
}

bool operator==( vector lhs, vector rhs ){
return ( lhs.x == rhs.x ) && ( lhs.y == rhs.y );
}
 
TEST_CASE( "operator+" ){
    vector a(1,2);
    vector b(4,5);
    std::stringstream s;
    vector v = a + b;
    s << v;
    REQUIRE( s.str() == "(5,7)" );   
}

TEST_CASE( "operator+=" ){
    vector a(1,2);
    vector b(4,5);
    std::stringstream s;
    a += b;
    s << a;
    REQUIRE( s.str() == "(5,7)" );   
}

TEST_CASE( "operator-" ){
    vector a(1,2);
    vector b(4,6);
    std::stringstream s;
    vector v = b - a;
    s << v;
    REQUIRE( s.str() == "(3,4)" );   
}

TEST_CASE( "operator-=" ){
    vector a(1,2);
    vector b(4,6);
    std::stringstream s;
    a -= b;
    s << a;
    REQUIRE( s.str() == "(-3,-4)" );   
}

TEST_CASE( "operator*" ){
    vector a(1,2);
    vector b(4,6);
    std::stringstream s;
    vector v = b * a;
    s << v;
    REQUIRE( s.str() == "(4,12)" );   
}

TEST_CASE( "operator*=" ){
    vector a(1,2);
    vector b(4,6);
    std::stringstream s;
    a *= b;
    s << a;
    REQUIRE( s.str() == "(4,12)" );   
}
TEST_CASE( "operator/" ){
    vector a(12,16);
    vector b(4,4);
    std::stringstream s;
    vector v = a / b;
    s << v;
    REQUIRE( s.str() == "(3,4)" );   
}

TEST_CASE( "operator/=" ){
    vector a(16,12);
    vector b(4,6);
    std::stringstream s;
    a /= b;
    s << a;
    REQUIRE( s.str() == "(4,2)" );   
}