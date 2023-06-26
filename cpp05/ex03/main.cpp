
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){

    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "mittous");
    if (rrf)
        std::cout << *rrf << std::endl;
    Bureaucrat bur("mittous", 1);
    rrf->beSigned(bur);
    bur.signForm(*rrf);
    rrf->execute(bur);
    delete rrf;
}