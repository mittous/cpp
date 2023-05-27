#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <stdexcept>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &assign);

		std::string get_Name() const;
		unsigned int get_Grade() const;
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

std::ostream& operator<<(std::ostream& os, Bureaucrat &bur);

#endif