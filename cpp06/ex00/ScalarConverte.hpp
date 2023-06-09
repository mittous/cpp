#ifndef SCALARCONVERTE_HPP
# define SCALARCONVERTE_HPP

# include <iostream>
# include <string>
#include <cctype>
#include <sstream>
#include <iomanip>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN,
};

typedef struct s_num
{
	bool	dot;
	bool	f;
}	t_num;


class ScalarConverte
{
	public:
		ScalarConverte();
		ScalarConverte(const ScalarConverte &copy);
		~ScalarConverte();
		ScalarConverte & operator=(const ScalarConverte &assign);

		void convert(std::string value);

	private:
		std::string _value;
};

int checkType(std::string value);

#endif