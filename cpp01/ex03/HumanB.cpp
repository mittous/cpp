#include "HumanB.hpp"


HumanB::HumanB(std::string _name)
{
    this->name = _name;
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->danger->getType() << "\n";
}
void    HumanB::setWeapon(Weapon &danger)
{
    this->danger = &danger;
}