#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ScavTrap a("mittous");

    a.attack("enemy👿");
    a.takeDamage(8);
    a.beRepaired(10);
    a.guardGate();

}