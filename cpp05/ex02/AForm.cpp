#include "AForm.hpp"

AForm::AForm() : name("default"), grade_Required_Sign(1), grade_Required_Execut(1){
	signde = false;
}

AForm::AForm(const AForm &copy) : name(copy.name), grade_Required_Sign(copy.grade_Required_Sign), 
		grade_Required_Execut(copy.grade_Required_Execut){
}

AForm::~AForm(){
}

AForm & AForm::operator=(const AForm &assign)
{
	if (this != &assign)
		signde = assign.signde;
	return *this;
}

AForm::AForm(std::string _name, int _grade_R_Sign, int _grade_R_Execut) : name(_name), 
		grade_Required_Sign(_grade_R_Sign), grade_Required_Execut(_grade_R_Execut){
	signde = false;
	if (grade_Required_Execut < 1 || grade_Required_Sign < 1)
		throw GradeTooLowException();
	else if (grade_Required_Execut > 150 || grade_Required_Sign < 1)
		throw GradeTooHighException();
}


// gett

std::string AForm::get_name() const
{
	return (name);
}
bool		AForm::get_signed() const
{
	return (signde);
}
int			AForm::get_grade_Required_Sign() const
{
	return (grade_Required_Sign);
}
int			AForm::get_grade_Required_Execut() const
{
	return (grade_Required_Execut);
}
// gett


// excep
const char *AForm::GradeTooHighException::what() const throw()
{
	return ("AForm grade too high\n");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm grade too low\n");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return (" AForm is not signed\n");
}
// excep

// << op-overl
std::ostream &operator<<(std::ostream &os, AForm &Aform)
{
	os << Aform.get_name() << "\n" 
	<< "AForm status " << Aform.get_signed() << "\n"
	<< "Grade required to  sign = " << Aform.get_grade_Required_Sign() << "\n" 
	<< "Grade required to  execut = " << Aform.get_grade_Required_Execut()<< std::endl;
	return os;
}
// << op-overl

// beSigned

void	AForm::beSigned(Bureaucrat &bur)
{
	if (bur.get_Grade() <= grade_Required_Sign)
		signde = true;
	else
		throw GradeTooLowException();
}

// beSigned
