#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
	this->name = "Default";
	grade = 1;

}

Bureaucrat::Bureaucrat(std::string _name, int _grad) : name(_name) , grade(_grad)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	(void) assign;
	return *this;
}

std::string Bureaucrat::get_Name()
{
	return this->name;
}

unsigned int Bureaucrat::get_Grade()
{
	return this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const
{
	return ("Grade too low");
}

void	Bureaucrat:: ft_increment()
{
	this->grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat:: ft_decrement()
{
	this->grade++;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}
