#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrbry_C_Form", 145, 137),
 target("sherub_targ"){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
 AForm(copy), target(copy.target){
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(){
}

// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign){
	if (this != &assign)
		target = assign.target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): 
AForm("Shrbry_C_Form", 145, 137), target(_target) {}

// execute
void ShrubberyCreationForm ::execute(Bureaucrat const & exec) const
{
	if (exec.get_Grade() > get_grade_Required_Execut())
		throw AForm::GradeTooLowException();
	else if (!get_signed())
		throw AForm::FormNotSigned();
	else
	{
		std::ofstream tree;
		tree.open(target + "_shrubbery");
		if (tree.is_open())
		{
			tree << "       _-_" << std::endl;
			tree << "    /~~   ~~\\" << std::endl;
			tree << " /~~         ~~\\" << std::endl;
			tree << "{               }" << std::endl;
			tree << " \\  _-     -_  /" << std::endl;
			tree << "   ~  \\\\ //  ~" << std::endl;
			tree << "_- -   | | _- _" << std::endl;
			tree << "  _ -  | |   -_" << std::endl;
			tree << "      // \\\\" << std::endl;
			tree.close();
		}
		else
		{
			std::cout << "Error opening file" << std::endl;
			return ;
		}
	}
}