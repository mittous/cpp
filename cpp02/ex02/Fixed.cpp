#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value_(0)
{
    std::cout << "\e[0;33mDefault constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const int _value)
{
    std::cout << "\e[0;33mInt constructor called\e[0m" << std::endl;
	this->value_ = _value * 256;
}

Fixed::Fixed(const float _value)
{
    std::cout << "\e[0;33mFloat constructor called\e[0m" << std::endl;
	value_ = roundf(_value * 256);
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "\e[0;33mCopy constructor called\e[0m" << std::endl;
	value_ = other.value_;
}

Fixed::~Fixed()
{
    std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}


int Fixed::getRawBits(void) const
{
    std::cout << "\e[0;32mgetRawBits member function called\e[0m" << std::endl;
    return value_;
}

void Fixed::setRawBits(int const raw) 
{
    std::cout << "\e[0;32msetRawBits member function called\e[0m" << std::endl;
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
    std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
    if (this != &other) 
        value_ = other.value_;
    return *this;
}

bool	Fixed::operator>(const Fixed& other)
{
    return(this->value_ > other.value_);
}

bool	Fixed::operator<(const Fixed& other)
{
    return(this->value_ < other.value_);
}

bool	Fixed::operator>=(const Fixed& other)
{
    return(this->value_ >= other.value_);
}

bool	Fixed::operator<=(const Fixed& other)
{
    return(this->value_ <= other.value_);
}

bool	Fixed::operator==(const Fixed& other)
{
    return(this->value_ == other.value_);
}

bool	Fixed::operator!=(const Fixed& other)
{
    return(this->value_ != other.value_);
}

