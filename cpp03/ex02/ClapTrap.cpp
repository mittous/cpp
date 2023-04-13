#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoint(10), energy(10), _attack(0){
    std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}
ClapTrap::~ClapTrap(){
    std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
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

void ClapTrap::attack(const std::string& target)
{
    if (hitPoint && energy)
    {
        energy--;
        std::cout<< name <<" attacks "<< target <<", causing "<< _attack << " points of damage🤕"<< std::endl; 
    }
    else
        std::cout<<  name << " is died💀."<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoint -= amount;
    if (hitPoint > 0)
        std::cout<< name <<" take amount of "<< amount <<" in damage🤕."<< std::endl; 
    else
        std::cout<<  name << " is died💀."<< std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoint && energy)
    {
        hitPoint += amount;
        energy--;
        std::cout<< name <<" repaired "<< amount <<" and have now "<< hitPoint << " hitPoint 🔋"<< std::endl; 
    }
    else
        std::cout<<  name << " is died💀."<< std::endl;

}
