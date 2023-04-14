# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>


class Fixed 
{
private:

    int value_;
    static const int fractionalBits_ = 8;

public:

	// canon
    Fixed();
    Fixed(const float _value);
    Fixed(const Fixed& other);
    Fixed(const int _value);
    ~Fixed();
    
	int		getRawBits(void) const;
    void	setRawBits(int const raw);

    float	toFloat(void) const;
    int		toInt(void) const;
	
    Fixed&	operator=(const Fixed& other);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif
