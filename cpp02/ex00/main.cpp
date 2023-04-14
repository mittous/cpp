
#include "Fixed.hpp"

#include <iostream>

int main( void )
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    
    std::cout << a.getRawBits() << " = a" << std::endl;
    std::cout << b.getRawBits() << " = b" << std::endl;
    std::cout << c.getRawBits() << " = c" << std::endl;
    return 0;
}
