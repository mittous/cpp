#include "Form.hpp"

Form::Form()
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
	name = "Default";
	grade_Required_Execut = 1;
	grade_Required_Sign = 1;
	signde = false;
}

Form::Form(const Form &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
	*this = copy;
}

Form::~Form(){
}

Form & Form::operator=(const Form &assign)
{
	if (this != &assign)
	{
		name = assign.name;
		grade_Required_Execut = assign.grade_Required_Execut;
		grade_Required_Sign = assign.grade_Required_Sign;
		signde = assign.signde;
	}
	return *this;
}

Form::Form(std::string _name, int _grade_R_Sign, int _grade_R_Execut)
{
	name = _name;
	grade_Required_Execut = _grade_R_Execut;
	grade_Required_Sign = _grade_R_Sign;
	signde = false;

	if (grade_Required_Execut < 1 || grade_Required_Sign < 1)
		throw GradeTooLowException();
	else if (grade_Required_Execut > 150 || grade_Required_Sign < 1)
		throw GradeTooHighException();

}


// gett
std::string Form::get_name()
{
	return (name);
}
bool		Form::get_signed()
{
	return (signde);
}
int			Form::get_grade_Required_Sign()
{
	return (grade_Required_Sign);
}
int			Form::get_grade_Required_Execut()
{
	return (grade_Required_Execut);
}
// gett


// excep
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low\n");
}
// excep

// << op-overl
std::ostream &operator<<(std::ostream &os, Form &form)
{
	os << form.get_name() << "\n" 
	<< "Form status " << form.get_signed() << "\n"
	<< "Grade required to  sign = " << form.get_grade_Required_Sign() << "\n" 
	<< "Grade required to  execut = " << form.get_grade_Required_Execut()<< std::endl;
	return os;
}
// << op-overl

// beSigned

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.get_Grade() <= grade_Required_Sign)
		signde = true;
	else
		throw GradeTooLowException();
}

// beSigned
