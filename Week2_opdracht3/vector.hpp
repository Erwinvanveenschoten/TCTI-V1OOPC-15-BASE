#ifndef VECTOR_HPP
#define VECTOR_HPP

///@file

///2D integer vector ADT
//
///This is a 2D vector ADT that stores its two compnents as integers.
///The x and y components are public attributes.
///The appropriate constructors and operators are provided.

class vector {
public:

    int x;
    int y;
    
    /// Default constructor
    //
    /// This constructor initializes the x and y attributes
    vector(int x, int y):
      x (x),
      y (y)
    {}
    
    /// + operator for two vectors
    //
    /// This operator adds the rhs to the lhs.
    /// The result is stored into a new variable of the vector class.
    vector operator+(const vector & rhs)const;
    
    /// += operator for two vectors
    //
    /// This operator adds the rhs to the lhs.
    /// The result is stored into lhs variable of vector class.
    vector & operator+=(const vector & rhs);
    
    /// - operator for two vectors
    //
    /// This operator substracts the rhs from the lhs.
    /// The result is stored into a new variable of the vector class.
    vector operator-(const vector & rhs)const;
    
    /// -= operator for two vectors
    //
    /// This operator substracts the rhs from the lhs.
    /// The result is stored into lhs variable of vector class.
    vector& operator-=(const vector & rhs);
    
    /// * operator for two vectors
    //
    /// This operator multiplies the rhs with the lhs.
    /// The result is stored into a new variable of the vector class.
    vector operator*(const vector & rhs)const;
        
    /// *= operator for two vectors
    //
    /// This operator multiplies the rhs with the lhs.
    /// The result is stored into lhs variable of the vector class.
    vector& operator*=(const vector & rhs);
    
    /// / operator for two vectors
    //
    /// This operator divises the rhs by the lhs.
    /// The result is stored into a new variable of the vector class.
    vector operator/(const vector & rhs)const;
    
    /// /= operator for two vectors
    //
    /// This operator divises the rhs by the lhs.
    /// The result is stored into lhs variable of the vector class.
    vector& operator/=(const vector & rhs);
    };

    
#endif // VECTOR_HPP