#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>
#include <string>


class Zombie
{
private:
    std::string name;
public:
    Zombie(/* args */);
    ~Zombie();

    void announce(void);
};

Zombie::Zombie(/* args */)
{
    std::cout<< "constractor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "distractor called" << std::endl;
}
/****************************_announce_****************************/
void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}




# endif