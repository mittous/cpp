#include "ScalarConverte.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    ScalarConverte cnvrt;
    cnvrt.convert(argv[1]);
    return 0;
}