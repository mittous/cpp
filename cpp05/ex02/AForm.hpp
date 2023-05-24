#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		std::string name;
		bool		signde;
		int			grade_Required_Sign;
		int			grade_Required_Execut;

	public:

		AForm(std::string name, int grade_R_Sign, int grade_R_Execut);

		// canon
		AForm();
		AForm(const AForm &copy);
		~AForm();
		AForm & operator=(const AForm &assign);
		// canon

		// gett
		std::string get_name() const;
		bool		get_signed() const;
		int			get_grade_Required_Sign() const;
		int			get_grade_Required_Execut() const;
		// gett

		// excep
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

		class FormNotSigned : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		// excep

		void	beSigned(Bureaucrat &bur);
		virtual void execute(Bureaucrat const & executor) const = 0;

};

std::ostream& operator<<(std::ostream& os,  AForm &bur);

#endif