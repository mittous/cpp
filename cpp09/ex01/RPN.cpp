#include "RPN.hpp"

RPN::RPN(){
}

RPN::RPN(const RPN &copy)
{
	_stack = copy._stack;
}

RPN::~RPN(){
}

RPN & RPN::operator=(const RPN &assign)
{
	if (this != &assign)
		_stack = assign._stack;
	return *this;
}


int stringToNum(const std::string& str) 
{
    std::istringstream iss(str);
    int value;
    iss >> value;
    return value;
}


int checkType(std::string str)
{
	int i = 0;
	if (str.size() == 1)
	{
		if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')
			return (10);
	}
	else if (str.size() > 1 && (str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			std::cout << "Error" << std::endl;
			exit (1);
		}
		i++;
	}
	return (stringToNum(str));
}

std::string ft_split(std::string &str, char c) 
{
	size_t tmp = str.find(c);
		
	std::string line = str.substr(0, tmp);
	tmp != str.npos ? str.erase(0, tmp + 1) : str.erase(0, str.npos);
	return (line);
}

void RPN::Rpn_Calculator(std::string arg)
{
    while (arg.size())
	{
		std::string tmp = ft_split(arg, ' ');
		if (checkType(tmp) == 10)
		{
			if (tmp == "+" && _stack.size() >= 2)
			{
				int a = _stack.top();
				_stack.pop();
				int b = _stack.top();
				_stack.pop();
				_stack.push(b + a);
			}
			else if (tmp == "-" && _stack.size() >= 2)
			{
				int a = _stack.top();
				_stack.pop();
				int b = _stack.top();
				_stack.pop();
				_stack.push(b - a);
			}
			else if (tmp == "*" && _stack.size() >= 2)
			{
				int a = _stack.top();
				_stack.pop();
				int b = _stack.top();
				_stack.pop();
				_stack.push(b * a);
			}
			else if (tmp == "/" && _stack.size() >= 2)
			{
				int a = _stack.top();
				if (a == 0)
				{
					std::cout << "Error" << std::endl;
					exit (1);
				}
				_stack.pop();
				int b = _stack.top();
				_stack.pop();
				_stack.push(b / a);
			}
			else
			{
				std::cout << "Error" << std::endl;
				exit (1);
			}
		}
		else
			_stack.push(checkType(tmp));
	}
	if (_stack.size() != 1)
	{
		std::cout << "Error" << std::endl;
		exit (1);
	}
	std::cout << _stack.top() << std::endl;
}
