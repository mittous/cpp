# include "RPN.hpp"

int main(int ac,  char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    RPN rpn;
    rpn.Rpn_Calculator(av[1]);
    return 0;
}