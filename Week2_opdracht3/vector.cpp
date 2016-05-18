#include "vector.hpp"


vector vector::operator+(const vector & rhs) const{
    return vector( x + rhs.x, y + rhs.y );
}

vector& vector::operator+=(const vector & rhs){
    x += rhs.x;
    y += rhs.y;
    return *this;
}

vector vector::operator-(const vector & rhs) const{
    return vector( x - rhs.x, y - rhs.y );
}

vector& vector::operator-=(const vector & rhs){
    x -= rhs.x;
    y -= rhs.y;
    return *this;
}

vector vector::operator*(const vector & rhs) const{
    return vector( x * rhs.x, y * rhs.y );
}

vector& vector::operator*=(const vector & rhs){
    x *= rhs.x;
    y *= rhs.y;
    return *this;
}

vector vector::operator/(const vector& rhs)const{
    return vector( x / rhs.x, y / rhs.y);
}

vector& vector::operator/=(const vector& rhs){
    x /= rhs.x;
    y /= rhs.y;
    return *this;
}