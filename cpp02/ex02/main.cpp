
#include "Fixed.hpp"

int main( void ) {
    Fixed a  (Fixed(3.14f));
    Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

    std::cout << "b        " << b << std::endl;
    std::cout << "a        " << a << std::endl;
    std::cout << " a + b   " << a + b   << std::endl;
    std::cout << " a * b   " << a * b   << std::endl;
    std::cout << " a - b   " << a - b   << std::endl;
    std::cout << " a / b   " << a / b   << std::endl;
    std::cout << " (a > b) " << (a > b) << std::endl;
    std::cout << " (a < b) " << (a < b) << std::endl;
    std::cout << " (a <= b)" << (a <= b)<< std::endl;
    std::cout << " (a >= b)" << (a >= b)<< std::endl;
    std::cout << " (a != b)" << (a != b)<< std::endl;
    std::cout << " (a == b)" << (a == b)<< std::endl;
    std::cout << " min(a b)" << Fixed::min(a, b) << std::endl;
    std::cout << " min(a b)" << Fixed::min(a, b) << std::endl;

    return 0;
}
