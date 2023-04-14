#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "\e[0;33mDefault Constructor called by ScavTrap\e[0m" << std::endl;
	this->energy = 50;
	this->hitPoint = 100;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
}


// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called by ScavTrap\e[0m" << std::endl;
}


// Operators
ScavTrap& ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::attack(const std::string& target)
{
    if (hitPoint && energy)
    {
        energy--;
        std::cout<< "Sc9798ave" << name <<" attacks "<< target <<", causing "<< _attack_damage << " points of damage🤕"<< std::endl; 
    }
    else
        std::cout<< name << " is died💀."<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
