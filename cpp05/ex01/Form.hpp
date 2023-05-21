#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	private:
		std::string name;
		bool		signde;
		int			grade_Required_Sign;
		int			grade_Required_Execut;

	public:

		Form(std::string name, int grade_R_Sign, int grade_R_Execut);

		// canon
		Form();
		Form(const Form &copy);
		~Form();
		Form & operator=(const Form &assign);
		// canon

		// gett
		std::string get_name();
		bool		get_signed();
		int			get_grade_Required_Sign();
		int			get_grade_Required_Execut();
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
		// excep

		void	beSigned(Bureaucrat &bur);

};

std::ostream& operator<<(std::ostream& os,  Form &bur);

#endif