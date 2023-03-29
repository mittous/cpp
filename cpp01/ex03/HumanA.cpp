#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_danger) :danger(_danger)
{
    this->name = _name;
}


HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->danger.getType() << "\n";
}
