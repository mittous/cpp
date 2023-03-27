#include "Zombie.hpp"


Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}


void    Zombie::setZombieName(std::string value)
{
    this->name = value;
}

void    Zombie::announce(void)
{
    std::cout << "hello im " << this->name<<std::endl;
}