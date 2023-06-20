#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange()
{
	std::cout << "\e[0;33mDefault Constructor called of BitcoinExchange\e[0m" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of BitcoinExchange\e[0m" << std::endl;
}


// Destructor
BitcoinExchange::~BitcoinExchange()
{
	std::cout << "\e[0;31mDestructor called of BitcoinExchange\e[0m" << std::endl;
}


// Operators
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	(void) assign;
	return *this;
}

std::string	get_txt_Content(void)
{
	std::ifstream data_csv;
    std::string data_Content;
    data_csv.open("data.csv");
    if (!data_csv.is_open())
    {
        std::cerr << "Error: could not open file data.csv make sur there is one. " << std::endl;
        exit(1);
    }
    getline (data_csv, data_Content, '\0');
	return (data_Content);
}
std::string	get_map_Content(int ac, char **av)
{
	std::ifstream txt;
    std::string txt_Content;
    txt.open(av[1]);
    if (ac == 1 || !txt.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        exit (1);
    }
    else if (ac > 2)
    {
        std::cerr << "Error: wrong number of argument." << std::endl;
        exit (1);
    }
    getline (txt, txt_Content, '\0');
	return (txt_Content);
}
void	BitcoinExchange::set_Map(int ac, char **av)
{
	std::string txt_Content = get_map_Content(ac, av);
	std::string data_Content = get_txt_Content();
    int index = 0;
    data_Content.erase(0, data_Content.find("\n") + 2);
    int lenght = data_Content.length();
    // std::cout << lenght << std::endl;
	while (index < lenght-1)
    {
        std::string key = data_Content.substr(0, data_Content.find(","));
        data_Content.erase(0, data_Content.find(",") + 1);
        std::string value = data_Content.substr(0, data_Content.find("\n"));
        data_Content.erase(0, data_Content.find("\n") + 1);
        _map[key] = value;
        index++;
    }
    // std::cout << index << std::endl;
    for (std::map<std::string, std::string>::iterator it = _map.begin(); it != _map.end(); it++)
    {
        std::cout << it->first <<" " << it->second << '\n';
    }

    // std::cout << txt_Content << std::endl;
}