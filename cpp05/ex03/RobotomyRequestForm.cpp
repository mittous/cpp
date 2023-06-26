#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("Roboto_Requ_F", 72, 45), target("default"){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), target(copy.target){
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm(){
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if(this != &assign)
		target = assign.target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("Roboto_Requ_F", 72, 45), target(_target) {
}

void	RobotomyRequestForm::execute(Bureaucrat const & exec) const
{
	if (exec.get_Grade() > get_grade_Required_Execut())
		throw AForm::GradeTooLowException();
	else if (!get_signed())
		throw AForm::FormNotSigned();
	else
	{
		std::cout << "khr khr chr far" << std::endl;
    	if (rand() % 2)
    	    std::cout << this->target << " success to robotomized \n";
    	else
    	    std::cout << this->target << " failed to robotomized \n";
	}
}