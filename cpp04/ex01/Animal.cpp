#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
	type = "Default_Animal";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
	*this = copy;

}

// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	std::cout << "\e[0;31m Assignment operator is called of Animal\e[0m" << std::endl;
	if (this != &assign)
	{
		type = assign.type;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Default_Sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}