# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
#include <stdbool.h>

class Fixed 
{
private:
    int value_;
    static const int fractionalBits_ = 8;
public:

    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int _value);
    Fixed(const float _value);	
    ~Fixed();
	int		getRawBits(void) const;
    void	setRawBits(int const raw);
    float	toFloat(void) const;
    int		toInt(void) const;

    //assgin op overload
    Fixed&	operator=(const Fixed& other);

    //6 comparison operators: >, <, >=, <=, == and !=
    bool	operator>(const Fixed& other);
    bool	operator<(const Fixed& other);
    bool	operator>=(const Fixed& other);
    bool	operator<=(const Fixed& other);
    bool	operator==(const Fixed& other);
    bool	operator!=(const Fixed& other);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif
