#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
	type = "WrongCat";

}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
	*this = copy;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}

// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	if (this != &assign)
	{
		type = assign.type;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "wrong_3MOOOOOO" << std::endl;
}
