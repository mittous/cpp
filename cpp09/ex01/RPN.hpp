#ifndef RPN_HPP_
#define RPN_HPP_

#include <iostream>
#include <cctype>
#include <sstream>
#include <stack>
#include <string>
class RPN
{
	public:
		RPN();
		RPN(const RPN &copy);
		~RPN();
		RPN & operator=(const RPN &assign);
		
        void Rpn_Calculator(std::string str);
	private:
		std::stack<int> _stack;
};



#endif