#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Bureaucrat.hpp"
class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		virtual ~Intern();
		Intern & operator=(const Intern &assign);
		AForm *makeForm(std::string name, std::string target);

	private:
		 
};

#endif 