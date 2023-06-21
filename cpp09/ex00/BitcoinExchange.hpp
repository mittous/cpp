#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_


#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <fstream>
#include <cctype>
#include <sstream>
enum e_data
{
	bad_date,
	negative_value,
	to_large_value,
	bad_value,
	DOUBLE,
	INT,
};


class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange & operator=(const BitcoinExchange &assign);

		void	set_Map();
		void	get_input_Content(int ac, char **av);
		void	BitcPrice();
	private:
		std::map<std::string, std::string> _map;
		std::string _input_Content;
};

#endif
