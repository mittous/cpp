
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"



class HumanA
{
private:
    std::string name;
    Weapon &danger;
public:
    HumanA(std::string _name, Weapon &_danger);
    ~HumanA();
    void    attack();
};




#endif
