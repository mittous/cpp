#include "Fixed.hpp"


// Constructors
Fixed::Fixed() : value(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
}


//copy Constructors
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Fixed\e[0m" << std::endl;
	this->value  = copy.value;
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



void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
}




int 	Fixed::getRawBits( void ) const
{
	return this->value;
}

