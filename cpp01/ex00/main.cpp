


#include "Zombie.hpp"

int main()
{
    Zombie *walker = newZombie("ismail");
    randomChump("mittous");

    walker->announce();

    delete walker ;
    return 0;
}