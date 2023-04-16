#include "Cat.hpp"
#include "Brain.hpp"
// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	type = "Cat";
	catBrain = new Brain();

}

Cat::Cat(const Cat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	catBrain = new Brain();
}

// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete catBrain;
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	if (this != &assign)
	{
		delete catBrain;
		type = assign.type;
		catBrain = new Brain(*assign.catBrain);
		catBrain = assign.catBrain;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "3MOOOOOO" << std::endl;
}
