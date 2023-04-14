#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "\e[0;33mCopy Constructor called of Fixed\e[0m" << std::endl;
	this->value = copy.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "\e[0;31mDestructor called of Fixed\e[0m" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign){
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	if (this != &assign)
		this->value = assign.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "\e[0;32msetRawBits member function called\e[0m" << std::endl;
	this->value = raw;
}

int 	Fixed::getRawBits(void) const{
	std::cout << "\e[0;32mgetRawBits member function called\e[0m" << std::endl;
	return this->value;
}
