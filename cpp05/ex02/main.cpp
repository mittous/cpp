
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

    try{
        Bureaucrat four("four", 150);
        ShrubberyCreationForm   test1("target1");
        RobotomyRequestForm     test2("target2");
        PresidentialPardonForm  test3("target3");

        test1.beSigned(four);
        test2.beSigned(four);
        test3.beSigned(four);
        four.signForm(test1);
        four.signForm(test2);
        four.signForm(test3);
        test1.execute(four);
    }
    catch (std::exception &e){
        std::cout << e.what() << "\n";
    }
}  