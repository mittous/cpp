#include "Form.hpp"

Form::Form() : name("Default"), grade_Required_Sign(1), grade_Required_Execut(1), signde(false){
}

Form::Form(const Form &copy) : name(copy.name), grade_Required_Sign(copy.grade_Required_Sign),
		grade_Required_Execut(copy.grade_Required_Execut), signde(copy.signde){
}

Form::~Form(){
}

Form & Form::operator=(const Form &assign){
	if (this != &assign)
		this->signde = assign.signde;
	return *this;
}

Form::Form(std::string _name, int _grade_R_Sign, int _grade_R_Execut) : name(_name),
		grade_Required_Sign(_grade_R_Sign), grade_Required_Execut(_grade_R_Execut){
	signde = false;

	if (grade_Required_Execut < 1 || grade_Required_Sign < 1)
		throw GradeTooLowException();
	else if (grade_Required_Execut > 150 || grade_Required_Sign < 1)
		throw GradeTooHighException();

}


// gett
std::string Form::get_name() const
{
	return (name);
}
bool		Form::get_signed() const
{
	return (signde);
}
int			Form::get_grade_Required_Sign() const
{
	return (grade_Required_Sign);
}
int			Form::get_grade_Required_Execut() const
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
	<< "Form status               = " << (form.get_signed()? "Signed" : "Not signed") << "\n"
	<< "Grade required to  sign   = " << form.get_grade_Required_Sign() << "\n" 
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
