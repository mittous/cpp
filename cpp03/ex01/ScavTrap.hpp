#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap();
		ScavTrap & operator=(const ScavTrap &assign);

		void attack(const std::string& target);
		void guardGate();

	private:
		
};

#endif