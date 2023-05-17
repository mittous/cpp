#include "Bureaucrat.hpp"

int main()
{

    try
    {
        Bureaucrat mitt("mittous", 1);
        std::cout << mitt << std::endl;
        mitt.ft_increment();
    }
    catch (std::exception& mit)
    {
        std::cerr << mit.what() << 2 <<std::endl;
        try
        {
            Bureaucrat a("iss,", 151);
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << e.what() << 1<< '\n';
        }
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << e.what() << 1<< '\n';
        }
    }
}