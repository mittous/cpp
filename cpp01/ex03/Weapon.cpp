



#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    return this->type;
}

void    Weapon::setType(std::string _type)
{
    this->type = _type;
}
Weapon::Weapon(std::string __type) :type(__type)
{
}

Weapon::~Weapon()
{
}