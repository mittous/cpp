#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
 
    try
    {
        Bureaucrat mitt("mittous", 0);
        Form form("form", 1, 1);
        try
        {
            form.beSigned(mitt);
        }
        catch(const std::exception& e)
        {
        }
        
        mitt.signForm(form);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what();
    }
    return (0);
}