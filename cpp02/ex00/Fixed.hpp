#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int value;
	static const int fractionalBits = 8;
public:
	// Constructors
	Fixed();
	Fixed(const Fixed &copy);
	
	// Destructor
	~Fixed();
	
	// Operators
	Fixed & operator=(const Fixed &assign);

	void setRawBits( int const raw );
	int getRawBits(void) const;
};

#endif