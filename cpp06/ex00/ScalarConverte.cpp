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
	int index = 0;
	if (!std::isdigit(value[0]))
	{
		if (value.size() == 1)
			return CHAR;
		else if (value[0] == '-' || value[0] == '+')
		{
			if (std::isdigit(value[1]))
				index = 1;
		}
		else
			return UNKNOWN;
	}
	else if (std::isdigit(value[index]))
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
			else if (i == (value.length() - 1) && c == 'f')
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
		return FLOAT;
	else if (num.dot == true)
		return DOUBLE;
	else if (num.dot == false && num.f == false)
		return INT;
	return UNKNOWN;
}

double stringToNum(const std::string& str) 
{
	puts("stringToNum");
    std::istringstream iss(str);
    double value;
    iss >> value;
    return value;
}


void	convertChar(std::string value)
{
	puts("convertChar");
	char c = value[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	convertInt(std::string value)
{
	puts("convertInt");
	int i = stringToNum(value);
	std::cout << "char: ";
	if (i < 0 || i > 127)
		std::cout << "impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
	std::cout << "int: "    << i << std::endl;
	std::cout << "float: "  << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	convertDouble(std::string value)
{
	puts("convertDouble");
	double d = stringToNum(value);
	std::cout << "char: ";
	if (d < 0 || d > 127)
		std::cout << "impossible" << std::endl;
	else if (d < 32 || d == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(d) << std::endl;

	std::cout << "int: ";
	long l = static_cast<long long>(d);
	if ( l< INT_MIN || l > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	convertFloat(std::string value)
{
	puts("convertFloat");
	value = value.erase(value.size() - 1, 1);
	float f = stringToNum(value);
	std::cout << "char: ";
	if (f < 0 || f > 127)
		std::cout << "impossible" << std::endl;
	else if (f < 32 || f == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(f) << std::endl;
	std::cout << "int: ";
	long l = static_cast<long long>(f);
	if ( l< INT_MIN || l > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverte::convert(std::string value)
{
	if (checkType(value) == CHAR)
		convertChar(value);

	else if (checkType(value) == INT)
		convertInt(value);

	else if (checkType(value) == DOUBLE)
		convertDouble(value);

	else if (checkType(value) == FLOAT)
		convertFloat(value);

	else if (checkType(value) == UNKNOWN)
		std::cout << "               -*-*-Error-*-*- \
			\nThe literal must belong to one of the following a scalar types:\
			\n• char \n• int \n• float \n• double\n";
}