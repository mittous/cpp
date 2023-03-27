#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>
#include <string>


class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string _name);
	~Zombie();

	void    announce(void);
};




/****************************_randomChump_****************************/

void randomChump(std::string name);

/****************************_randomChump_****************************/





/****************************_newZombie_****************************/

Zombie* newZombie( std::string name);

/****************************_newZombie_****************************/


# endif