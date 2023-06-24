#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <deque>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		~PmergeMe();
		PmergeMe & operator=(const PmergeMe &assign);

	// private:
        std::vector<int> _v;
        std::deque<int> _d;
		
};

template <typename T>
void insertion_Sort(T & cont)
{
	for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
	{
		typename T::iterator it2 = it;
		while (it2 != cont.end())
		{
			if (*it > *it2)
			{
				long tmp = *it;
				*it = *it2;
				*it2 = tmp;
			}
			it2++;
		}
	}
}




#endif