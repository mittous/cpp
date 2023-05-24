#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;
   
class PresidentialPardonForm : public AForm
{


	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm(std::string target);
	private:
		std::string target;
};

#endif