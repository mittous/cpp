
#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable is "<<&str << std::endl;
    std::cout << "TThe memory address held by stringPTR is     "<< stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is      " << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "Value of string variable:      " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl ;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}