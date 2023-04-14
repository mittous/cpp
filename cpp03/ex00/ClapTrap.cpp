#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoint(10), energy(10), _attack_damage(0){
    std::cout << "\e[0;33mDefault constractor been called.\e[0m" << std::endl;
}
ClapTrap::~ClapTrap(){
    std::cout << "\e[0;31mdestructor been called.\e[0m"<<std::endl;
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
        _attack_damage = other._attack_damage;
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
        std::cout<<"ClapTrap "<< name <<" attacks "<< target <<", causing "<< _attack_damage << " points of damage🤕"<< std::endl; 
    }
    else
        std::cout<<"ClapTrap " << name << " is died💀."<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoint -= amount;
    if (hitPoint > 0)
        std::cout<<"ClapTrap "<< name <<" take amount of "<< amount <<" in damage🤕."<< std::endl; 
    else
        std::cout<<"ClapTrap " << name << " is died💀."<< std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoint && energy)
    {
        hitPoint += amount;
        energy--;
        std::cout<<"ClapTrap "<< name <<" repaired "<< amount <<" and have now "<< hitPoint << " hitPoint 🔋"<< std::endl; 
    }
    else
        std::cout<<"ClapTrap " << name << " is died💀."<< std::endl;

}
