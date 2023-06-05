#include "ScalarConverte.hpp"

ScalarConverte::ScalarConverte() : _value("0"){
}

ScalarConverte::ScalarConverte(const ScalarConverte &copy){
	*this = copy;
}

ScalarConverte::~ScalarConverte(){
}

ScalarConverte & ScalarConverte::operator=(const ScalarConverte &assign)
{
	if (this != &assign)
		this->_value = assign._value;
	return *this;
}

int checkType(std::string value)
{
	t_num num;
	num.dot = false;
	num.f = false;
	if (value == "\n" || value == "\r" || value == "\t" || value == "\v" || value == "\b" || value == "\0")
		return NON_DISPLAYABLE;
	if (!std::isdigit(value[0]) && value.size() > 1)
		return UNKNOWN;
	else if (!std::isdigit(value[0]) && value.size() == 1)
		return CHAR;
	else if (std::isdigit(value[0]))
	{
		for (size_t i = 0; i < value.length(); ++i)
		{
			char c = value[i];
			if (c == '.')
			{
				if (num.dot == true)
					return UNKNOWN;
				num.dot = true;
			}
			else if (c == 'f')
			{
				if (num.f == true)
					return UNKNOWN;
				num.f = true;
			}
			else if (!std::isdigit(c))
				return UNKNOWN;
		}
	}
	if (num.dot == true && num.f == true)
		return DOUBLE;
	else if (num.dot == true)
		return FLOAT;
	else
		return INT;
}

void ScalarConverte::convert(std::string value)
{
	if (checkType(value) == CHAR)
	{
		char c = value[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else if (checkType(value) == INT)
	{
		int i = std::stoi(value);
		std::cout << "char: ";
		if (i < 0 || i > 127)
			std::cout << "impossible" << std::endl;
		else if (i < 32 || i == 127)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(i) << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
	else if (checkType(value) == DOUBLE)
	{
		double d = std::stod(value);
		std::cout << "char: ";
		if (d < 0 || d > 127)
			std::cout << "impossible" << std::endl;
		else if (d < 32 || d == 127)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(d) << std::endl;
		std::cout << "int: ";
		if (d < INT_MIN || d > INT_MAX)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(d) << std::endl;
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else if (checkType(value) == FLOAT)
	{
		float f = std::stof(value);
		std::cout << "char: ";
		if (f < 0 || f > 127)
			std::cout << "impossible" << std::endl;
		else if (f < 32 || f == 127)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(f) << std::endl;
		std::cout << "int: ";
		if (f < INT_MIN || f > INT_MAX)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	else if (checkType(value) == UNKNOWN)
		std::cout << "               -*-*-Error-*-*- \
			\nThe literal must belong to one of the following a scalar types:\
			\n• char \n• int \n• float \n• double\n";
	else if (checkType(value) == NON_DISPLAYABLE)
		std::cout << "Non displayable characters shouldn't be used as inputs.\n";
}