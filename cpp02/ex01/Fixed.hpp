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
	// Canonical_form_requirment
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed & operator=(const Fixed &assign);

	void setRawBits( int const raw );
	int getRawBits(void) const;


	// constractor overload
	Fixed::Fixed(const int _value);
	Fixed::Fixed(const float _value);


	//
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &os, Fixed& obj);

#endif