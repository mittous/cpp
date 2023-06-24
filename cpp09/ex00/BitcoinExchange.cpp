#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	_map = copy._map;
	_input_Content = copy._input_Content;	
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	if (this != &assign)
	{
		_map = assign._map;
		_input_Content = assign._input_Content;
	}
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
}

std::string ft_trim(const std::string& str, char c) 
{
    size_t first = str.find_first_not_of(c);
    if (first == std::string::npos)
        return ("");
    size_t last = str.find_last_not_of(c);
    return str.substr(first, last - first + 1);
}


void ft_checkFirst_line(std::string &_input_Content)
{
	if (_input_Content.empty()){
		std::cerr << "Error: empty file." << std::endl;
		exit (1);
	}
	while (_input_Content[0] == '\n')
		_input_Content.erase(0, 1);
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
	else
		return 0;
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

int ft_Check_Inpute_Is_Valid(std::string _input_Content, std::map<std::string, std::string> _map)
{
	std::string input_Content= ft_trim(_input_Content, ' ');
	int pipe = std::count(input_Content.begin(), input_Content.end(), '|');
	if (pipe != 1)
		return (0);
	std::string date = ft_split(input_Content, '|');
	std::string date_to_search = date;
	std::string value = ft_split(input_Content, '\n');
	std::string date_split;
	if (std::count(date.begin(), date.end(), '-') == 2)
	{
		int nb_day = 0;
		int nb_dayMM2 = 0;
		int i = 3;
		while (i)
		{
			date_split = ft_split(date, '-');
			if (checkType(date_split) == INT)
			{
				int nb = stringToNum(date_split);
				if (i == 3)
				{
					if (date_to_search == "2009-01-01" || nb < 2009)
						return (NO_BITCOIN);
					else if (date_split.length() == 4 && nb >= 2009)
					{
						if ((nb % 4 == 0 && nb % 100 != 0) || (nb % 400 == 0))
							nb_dayMM2 = 29;
						else
							nb_dayMM2 = 28;
					}
					else
						return (BAD_INPUT);
				}
				else if (i == 2)
				{
					if (date_split.length() == 2 && nb > 0 && nb < 13)
						switch (nb)
						{
							case 4:
							case 6:
							case 9:
							case 11:
								nb_day = 30;
								break;
							case 2:
								nb_day = nb_dayMM2;
								break;
							default:
								nb_day = 31;
								break;
						}
					else
						return (BAD_INPUT);
				}
				else if (i == 1)
				{
					if (date_split.length() == 2 && nb > 0)
					{
						if (nb <= nb_day)
							break;
						else
							return (BAD_INPUT);
					}
					else
						return (BAD_INPUT);

				}
			}
			i--;
		}
		if (stringToNum(value) < 0)
			return (NEGATIVE);
		else if (stringToNum(value) > 1000)
			return (TOO_LARGE);
		else if (checkType(value) == INT || checkType(value) == DOUBLE)
		{
			std::map<std::string, std::string>::iterator it = _map.find(date_to_search);
			if (it != _map.end())
			{
				std::cout << it->first << " => " << value << " = " << stringToNum (it->second) * stringToNum(value) << std::endl;
			}
			else
			{
				std::map<std::string, std::string>::iterator lower = _map.lower_bound(date_to_search);
				--lower;
				std::cout << date_to_search << " => " << value << " = " << stringToNum (lower->second) * stringToNum(value) << std::endl;
			}
		}
		else
			return (BAD_INPUT);
	}
	return (1337);
}


void BitcoinExchange::BitcPrice()
{
	ft_checkFirst_line(_input_Content);
	while (_input_Content.size())
	{
		size_t tmp = _input_Content.find("\n");
		std::string line = _input_Content.substr(0, tmp);
		tmp != _input_Content.npos ? _input_Content.erase(0, tmp + 1) : _input_Content.erase(0, _input_Content.npos);
		if (tmp == 0)
			continue;
		int check = ft_Check_Inpute_Is_Valid(ft_trim(line, ' '), _map);
		switch (check)
		{
		case BAD_INPUT:
			std::cout << "Error: bad input => " << line << std::endl;
			break;
		case NEGATIVE:
			std::cout << "Error: not a positive number."<< std::endl;
			break;
		case TOO_LARGE:
			std::cout << "Error: too large a number."<< std::endl;
			break;
		case NO_BITCOIN:
			std::cout << "Error: Bitcoin didn't invented yet (hh) =>"<< line << std::endl;
			break;
		}
	}
}