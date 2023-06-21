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

std::string	get_dataCsv_Content(void)
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

void	BitcoinExchange::get_input_Content(int ac, char **av)
{
	std::ifstream txt;
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
	getline (txt, _input_Content, '\0');
}

void	BitcoinExchange::set_Map()
{
	std::string csvData_Content = get_dataCsv_Content();
	csvData_Content.erase(0, csvData_Content.find("\n") + 1);
	int lenght = csvData_Content.length();
	while (lenght)
	{
		std::string key = csvData_Content.substr(0, csvData_Content.find(","));
		csvData_Content.erase(0, csvData_Content.find(",") + 1);
		std::string value = csvData_Content.substr(0, csvData_Content.find("\n"));
		csvData_Content.erase(0, csvData_Content.find("\n") + 1);
		_map[key] = value;
		lenght = csvData_Content.length();
	}
	// for (std::map<std::string, std::string>::iterator it = _map.begin(); it != _map.end(); it++)
	// {
	//     std::cout << it->first <<" " << it->second << '\n';
	// }
}

std::string ft_trim(const std::string& str, char c) 
{
    size_t first = str.find_first_not_of(c);
    if (first == std::string::npos)
        return ("");
    size_t last = str.find_last_not_of(c);
    return str.substr(first, last - first + 1);
}


void ft_checkFirst_line(std::string _input_Content)
{
	if (_input_Content.empty()){
		std::cerr << "Error: empty file." << std::endl;
		exit (1);
	}
	std::string line = _input_Content.substr(0, _input_Content.find("\n"));
	std::string input_Content = ft_trim(line, ' ');
	if (input_Content != "date | value"){
		std::cerr << "Error: make sure your input is at this format\n date | value " << std::endl;
		exit (1);
	}
	_input_Content.erase(0, _input_Content.find("\n") + 1);
}


std::string ft_split(std::string &str, char c) 
{
	std::string ret = str.substr(0, str.find(c));
	str.erase(0, str.find(c) + 1);
	ret = ft_trim(ret, ' ');
	return (ret);
}


int checkType(std::string value)
{
	bool dot = false;
	int index = 0;
	if (std::isdigit(value[index]))
	{
		for (size_t i = 0; i < value.length(); ++i)
		{
			char c = value[i];
			if (c == '.')
			{
				if (dot == true)
					return 0;
				dot = true;
			}
			else if (!std::isdigit(c))
				return 0;
		}
	}
	if (dot == true)
		return DOUBLE;
	else if (dot == false)
		return INT;
		return 0;
}

double stringToNum(const std::string& str) 
{
    std::istringstream iss(str);
    double value;
    iss >> value;
    return value;
}

// double convert(std::string value)
// {
// 	if (checkType(value) == INT)
// 		int i = stringToNum(value);
// 	else if (checkType(value) == DOUBLE)
// 		double d = stringToNum(value);
	
// }

int ft_Check_Inpute_Is_Valid(std::string _input_Content)
{
	std::string input_Content= ft_trim(_input_Content, ' ');
	int pipe = std::count(input_Content.begin(), input_Content.end(), '|');
	if (pipe != 1)
		return (0);
	std::string date = ft_split(input_Content, '|');
	std::string value = ft_split(input_Content, '\n');

	int i = 2;
	int ret = 0;
	while (i && std::count(date.begin(), date.end(), '-') == 2)
	{
		std::string date_split = ft_split(date, '-');
		// std::cout << date_split << std::endl;
		if (i == 2)
		{
			if (date_split.length() == 4 && checkType(date_split) == INT)
			{
			
				puts("111111111");
				ret = 1;
			}
			else
				ret = 0;
		}
		else if (i == 1 || i == 0)
		{
			if (date_split.length() == 2 && checkType(date_split) == INT && stringToNum(date_split) > 0)
				ret = 1;
			else
				ret = 0;
		}
		i--;
	}
	return (ret);
}


void BitcoinExchange::BitcPrice()
{
	ft_checkFirst_line(_input_Content);
	while (_input_Content.size())
	{
		std::string line = _input_Content.substr(0, _input_Content.find("\n"));
		_input_Content.erase(0, _input_Content.find("\n") + 1);
		int check = ft_Check_Inpute_Is_Valid(ft_trim(line, ' '));
		std::cout << check << std::endl;
		// switch (check)
		// {
		// case 0:
		// 	std::cout << "Error: bad input => " << line << std::endl;
		// 	break;
		// case 1:
		// 	std::cout << "Error: not a positive number."<< std::endl;
		// 	break;
		// case 2:
		// 	std::cout << "Error: too large a number."<< std::endl;
		// 	break;
		// }
	}
}