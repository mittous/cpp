#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	type = "Dog";

}

Dog::Dog(const Dog &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	*this = copy;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	if (this != &assign)
	{
		type = assign.type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "BAAA333333" << std::endl;
}