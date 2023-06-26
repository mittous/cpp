#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>
class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);
		ShrubberyCreationForm(std::string target);

		void execute(Bureaucrat const & exec) const;
	private:
		std::string target;
};

#endif