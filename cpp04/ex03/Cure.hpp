#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

class Cure
{
	public:
		// Constructors
		Cure();
		Cure(const Cure &copy);
		
		// Destructor
		~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);
		
	private:
		
};

#endif