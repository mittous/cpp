# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
#include <stdbool.h>

class Fixed 
{
private:
    int value_;
    static const int fractionalBits_ = 8;
public:

    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int _value);
    Fixed(const float _value);
    ~Fixed();
	int		getRawBits(void) const;
    void	setRawBits(int const raw);
    float	toFloat(void) const;
    int		toInt(void) const;

    // assgin op overload
    Fixed&	operator=(const Fixed& other);
    a < b;
    // 6 comparison operators: >, <, >=, <=, == and !=
    bool	operator>(const Fixed& other)  const;
    bool	operator<(const Fixed& other)  const;
    bool	operator>=(const Fixed& other) const;
    bool	operator<=(const Fixed& other) const;
    bool	operator==(const Fixed& other) const;
    bool	operator!=(const Fixed& other) const;
    // 6 comparison operators: >, <, >=, <=, == and !=
    
    
    // The 4 arithmetic operators: +, -, *, and /
    Fixed   operator+(const Fixed& obj2);
    Fixed   operator-(const Fixed& obj2);
    Fixed   operator*(const Fixed& obj2);
    Fixed   operator/(const Fixed& obj2);
    // The 4 arithmetic operators: +, -, *, and /


    // The 4 increment/decrement operators
    Fixed   operator++(int);
    Fixed   operator++();
    Fixed   operator--(int);
    Fixed   operator--();
    // The 4 increment/decrement operators


    // The 4 const(min/max), non-const(min/max) operators
    static Fixed& min(Fixed& obj1, Fixed& obj2);
    static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
    static Fixed& max(Fixed& obj1, Fixed& obj2);
    static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
    // The 4 const(min/max), non-const(min/max) operators

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif
