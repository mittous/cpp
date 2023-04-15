#include "Dog.hpp"
#include "Brain.hpp"
// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	type = "Dog";
	dogBrain = new Brain();

}

Dog::Dog(const Dog &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	dogBrain = new Brain();
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete dogBrain;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	if (this != &assign)
	{
		delete this->dogBrain;
		type = assign.type;
		dogBrain = new Brain(*assign.dogBrain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "BAAA333333" << std::endl;
}