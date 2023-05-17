#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat mitt("mittous", 5);

    try
    {
        mitt.increment();
    }
    catch (std::exception &mitt)
    {
        std::cerr << mitt.what << std::endl;
    }
}