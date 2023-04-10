#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value_(0)
{
}

Fixed::Fixed(const int _value)
{
	this->value_ = _value * 256;
}

Fixed::Fixed(const float _value)
{
	value_ = roundf(_value * 256);
}

Fixed::Fixed(const Fixed& other)
{
	value_ = other.value_;
}

Fixed::~Fixed()
{
}


int Fixed::getRawBits(void) const
{
    return value_;
}

void Fixed::setRawBits(int const raw) 
{
    value_ = raw;
}

float Fixed::toFloat(void) const
{
    return (float)value_ / 256;
}

int Fixed::toInt(void) const
{
    return value_ / 256;
}


/***************** op overloading ********************/

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other) 
        value_ = other.value_;
    return *this;
}

/*********** comparison operators: >, <, >=, <=, == and != *************/
bool	Fixed::operator>(const Fixed& other) const
{
    return(this->value_ > other.value_);
}

bool	Fixed::operator<(const Fixed& other) const
{
    return(this->value_ < other.value_);
}

bool	Fixed::operator>=(const Fixed& other) const
{
    return(this->value_ >= other.value_);
}

bool	Fixed::operator<=(const Fixed& other) const
{
    return(this->value_ <= other.value_);
}

bool	Fixed::operator==(const Fixed& other) const
{
    return(this->value_ == other.value_);
}

bool	Fixed::operator!=(const Fixed& other) const
{
    return(this->value_ != other.value_);
}

/*********** comparison operators: >, <, >=, <=, == and != *************/



/**************** arithmetic operators: +, -, *, and *****************/
Fixed  Fixed::operator+(const Fixed& obj2)
{
    return (this->toFloat() + obj2.toFloat());
}

Fixed  Fixed::operator-(const Fixed& obj2)
{
    return (this->toFloat() - obj2.toFloat());
}

Fixed  Fixed::operator*(const Fixed& obj2)
{
    return ((this->toFloat() * obj2.toFloat()));
}

Fixed  Fixed::operator/(const Fixed& obj2)
{
    return (this->toFloat() / obj2.toFloat());
}

/**************** arithmetic operators: +, -, *, and *****************/




/**************** const(min/max) non-const(min/max) *****************/

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
    if (obj1 > obj2)
        return obj2;
    return obj1;
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
    if (obj1 > obj2)
        return obj2;
    return obj1;
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
    if (obj1 < obj2)
        return obj2;
    return obj1;
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
    if (obj1 < obj2)
        return obj2;
    return obj1;
}

/**************** const(min/max) non-const(min/max) *****************/



/**************** post/pre(increment/decremnt) *****************/


Fixed   Fixed::operator++(int)
{
    Fixed tmp (*this);
    ++this->value_;
    return (tmp);
}

Fixed   Fixed::operator++()
{
    this->value_++;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp (*this);
    ++this->value_;
    return (tmp);
}

Fixed   Fixed::operator--()
{
    this->value_++;
    return (*this);
}
/**************** post/pre(increment/decremnt) *****************/