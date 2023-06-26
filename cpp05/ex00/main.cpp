#include "Bureaucrat.hpp"

int main()
{

	try
	{
		Bureaucrat mittous("mittous", 1);
		std::cout << mittous << std::endl;
		try
		{
			mittous.ft_increment();
		}
		catch(std::exception& mit)
		{
			std::cerr << mit.what() << 0 <<std::endl;
		}
		std::cout << mittous << std::endl;
		Bureaucrat ismail("ismail", 151);
	}
	catch (std::exception& mit)
	{
		std::cerr << mit.what() << 1 <<std::endl;
		try
		{
			Bureaucrat ismailMittous("ismail Mittous,", -100);
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << 2 << '\n';
		}
	}
}