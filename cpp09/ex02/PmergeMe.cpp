#include "PmergeMe.hpp"

void parse_Nb(int ac, char **av, std::vector<int> &_v, std::deque<int> &_d)
{
	if (ac == 1)
	{
		std::cout << "Error: no nubmers entred." << std::endl;
		exit(1);
	}

	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			if (!isdigit(av[i][j]))
			{
				std::cout << "Error: make sur you enter just numbers and only positive ones." << std::endl;
				exit(1);
			}
			_d.push_back(atoi(av[i]));
			_v.push_back(atoi(av[i]));
		}
	}
}


void print_cont( std::deque<int> &_d, std::vector<int> &_v)
{
	std::cout << "Vector:" << std::endl;
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
		std::cout << *it << std::endl;
	std::cout << "Deque:" << std::endl;
	for (std::deque<int>::iterator it = _d.begin(); it != _d.end(); it++)
		std::cout << *it << std::endl;
}