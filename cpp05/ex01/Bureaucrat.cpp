#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat()
{
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
Bureaucrat::~Bureaucrat(){
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

int Bureaucrat::get_Grade()
{
	return this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low");
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

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur)
{
	os << bur.get_Name() << ", bureaucrat grade " << bur.get_Grade();
	return os;
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.get_signed() == true)
		std::cout << name << " signed" <<  form.get_name();
	else
		std::cout << name << " couldn't sign " <<  form.get_name() 
					<< " because his grade is too low" << std::endl;
}