


#ifndef zombie_hpp
#define zombie_hpp

#include <iostream>
#include <string>


class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();

    void    setZombieName(std::string value);
    void    announce(void);
};


Zombie* zombieHorde(int N, std::string name);

#endif
