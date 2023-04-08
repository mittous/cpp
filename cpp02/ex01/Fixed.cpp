#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Fixed\e[0m" << std::endl;
	this->value = copy.value;
}

Fixed::Fixed(const int _value)
{
	this->value = value * 256;
}

Fixed::Fixed(const float _value)
{
	this->value = value * 256;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called of Fixed\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
		this->value = assign.value;
	return *this;
}



float Fixed::toFloat( void ) const
{
	return ((float)this->value * 256);
}




int Fixed::toInt( void ) const
{
	return (this->value * 256);
}


std::ostream& operator<<(std::ostream &os, Fixed& obj)
{
	return os << obj.getRawBits();
}
