
#include <iostream>
#include <string>
#include <iomanip> 
class contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secre;
public:
    // contact(/* args */);
    // ~contact();
    std::string get_first_name();
    void set_first_name(std::string value);

    std::string get_last_name();
    void set_last_name(std::string value);
    
    std::string get_nickname();
    void set_nickname(std::string value);
    
    std::string get_phone_number();
    void set_phone_number(std::string value);
    
    std::string get_darkest_secre();
    void set_darkest_secre(std::string value);
    
};

// contact::contact(/* args */)
// {
// }

// contact::~contact()
// {
// }




std::string contact::get_first_name(void)
{
    return this->first_name;
}

void contact::set_first_name(std::string value)
{
    this->first_name = value;
}

std::string contact::get_last_name(void)
{
    return this->last_name;
}

void contact::set_last_name(std::string value)
{
    this->last_name = value;
}

std::string contact::get_nickname(void)
{
    return this->nickname;
}

void contact::set_nickname(std::string value)
{
    this->nickname = value;
}

std::string contact::get_phone_number(void)
{
    return this->phone_number;
}

void contact::set_phone_number(std::string value)
{
    this->phone_number = value;
}

std::string contact::get_darkest_secre(void)
{
    return this->darkest_secre;
}

void contact::set_darkest_secre(std::string value)
{
    this->darkest_secre = value;
}

class PhoneBook
{
private:
    /* data */
public:
    contact contacts[8];
};
