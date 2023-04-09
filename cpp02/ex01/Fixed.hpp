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
    ~Fixed();
    Fixed(const Fixed& other);
    Fixed&	operator=(const Fixed& other);
    
	// set/get
	int		getRawBits(void) const;
    void	setRawBits(int const raw);


	// overload constr
    Fixed(const int _value);
    Fixed(const float _value);
	
	//requir
    float	toFloat(void) const;
    int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif
