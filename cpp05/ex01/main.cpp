#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try 
    {
        Bureaucrat ismail("ismail", 1);
        Form mittous ("mittous", 1, 20);
        try
        {
            mittous.beSigned(ismail);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << mittous << std::endl;
        std::cout << ismail << std::endl;
    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
}
