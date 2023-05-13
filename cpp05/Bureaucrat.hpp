#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &assign);
		
		std::string get_Name();
		unsigned int get_Grade();

	private:
		const std::string name;
		unsigned int grade;
};

#endif