#include "Zombie.hpp"

int main()
{
    Zombie *walkers;

    walkers = zombieHorde(5, "mittous");
    for (int i = 0; i < 5; i++)
    {
        walkers[i].announce();
    }

    delete [] walkers;
    return 0;
}