#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		void execute(Bureaucrat const & executor) const;
		RobotomyRequestForm(std::string target);
	private:
		std::string target;
};

#endif