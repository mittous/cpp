#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>


class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string _name);
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap & operator=(const FragTrap &assign);
		void highFivesGuys(void);

	private:
		
};

#endif