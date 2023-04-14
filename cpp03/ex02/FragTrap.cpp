#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "\e[0;33mDefault Constructor called by FragTrap\e[0m" << std::endl;
	this->energy = 100;
	this->hitPoint = 100;
	this->_attack_damage = 30;
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
        _attack_damage = other._attack_damage;
        energy = other.energy ;
        hitPoint = other.hitPoint;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "highFivesGuys 👋" << std::endl;
}
