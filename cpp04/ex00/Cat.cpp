#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	type = "Cat";

}

Cat::Cat(const Cat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	*this = copy;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	if (this != &assign)
	{
		type = assign.type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "3MOOOOOO" << std::endl;
}
