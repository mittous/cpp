
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

class PhoneBook
{
private:
    /* data */
public:
    contact contacts[8];
    void	ft_add(int index);
};
