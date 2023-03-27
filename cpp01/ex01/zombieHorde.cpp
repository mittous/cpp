
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *walkers = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        walkers[i].setZombieName(name);
    }
    return walkers;
}