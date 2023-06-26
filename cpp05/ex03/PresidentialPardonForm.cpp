#include "PresidentialPardonForm.hpp"


// Constructors
PresidentialPardonForm::PresidentialPardonForm() : AForm("Pres_Pard_F", 25, 5), target("default"){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), target(copy.target){
}


// Destructor
PresidentialPardonForm::~PresidentialPardonForm(){
}


// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (this != &assign)
		this->target = assign.target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("Pres_Pard_F", 25, 5), target(_target) {}


void PresidentialPardonForm::execute(Bureaucrat const & exec) const
{
	if (exec.get_Grade() > get_grade_Required_Execut())
		throw AForm::GradeTooLowException();
	else if (!get_signed())
		throw AForm::FormNotSigned();
	else
		std::cout << exec.get_Name() << " has been pardoned by Zaphod Beeblebrox.\n";

}