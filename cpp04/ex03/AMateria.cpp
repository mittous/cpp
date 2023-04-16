#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}


// Destructor
AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign;
	return *this;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

std::string const& AMateria::getType() const
{
	return this->_type;
}