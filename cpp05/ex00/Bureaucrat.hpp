#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string name;
		int grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &assign);

		std::string get_Name();
		unsigned int get_Grade();
		void	ft_increment();
		void	ft_decrement();

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
};

#endif