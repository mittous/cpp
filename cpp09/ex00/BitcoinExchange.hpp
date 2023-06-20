#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_


#include <iostream>
#include <string>
#include <map>
#include <fstream>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange & operator=(const BitcoinExchange &assign);
		void set_Map(int ac, char **av);
		
	private:
		std::map<std::string, std::string> _map;
};

#endif
