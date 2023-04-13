#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "\e[0;33mDefault Constructor called by FragTrap\e[0m" << std::endl;
	this->energy = 50;
	this->hitPoint = 100;
	this->_attack = 20;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called by FragTrap\e[0m" << std::endl;
}


// Operators
FragTrap& FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        name = other.name;
        _attack = other._attack;
        energy = other.energy ;
        hitPoint = other.hitPoint;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "highFivesGuys 👋" << std::endl;
}