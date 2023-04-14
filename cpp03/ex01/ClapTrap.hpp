#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int hitPoint;
    int energy ;
    int _attack_damage ;

public:
    ClapTrap(std::string _name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();
    ClapTrap&   operator=(const ClapTrap &obj);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif