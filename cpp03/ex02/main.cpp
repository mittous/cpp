#include "ClapTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    
    FragTrap a("mittous");
    // ClapTrap b("")

    a.attack("enemy👿");
    a.takeDamage(8);
    a.beRepaired(10);
    a.takeDamage(10);
    a.takeDamage(1);
    a.takeDamage(1);
    a.attack("enemy👿");
    a.attack("enemy👿");
    a.highFivesGuys();

}