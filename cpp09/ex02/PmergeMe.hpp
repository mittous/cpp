#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
#include <sys/time.h>
#include <iomanip>



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


template <typename T>
void merge(T &cont, T Sub1, T Sub2)
{
	cont.clear();
	while (Sub1.size() && Sub2.size())
	{
		if (Sub1.at(0) > Sub2.at(0))
		{
			cont.push_back(Sub2.at(0));
			Sub2.erase(Sub2.begin());
		}
		else
		{
			cont.push_back(Sub1.at(0));
			Sub1.erase(Sub1.begin());
		}
	}
	while (Sub1.size())
	{
		cont.push_back(Sub1.at(0));
		Sub1.erase(Sub1.begin());
	}
	while (Sub2.size())
	{
		cont.push_back(Sub2.at(0));
		Sub2.erase(Sub2.begin());
	}
}

template <typename T>
void	merge_Insert_Sort_Algo(T &cont)
{
	T Sub1;
	T Sub2;

	for(typename T::iterator it = cont.begin(); it != cont.end(); it++)
	{
		if (it < cont.begin() + (cont.size() / 2))
			Sub1.push_back(*it);
		else
			Sub2.push_back(*it);
	}
	if (cont.size() <= 10)
	{
		
		insertion_Sort(cont);
		return ;
	}
	merge_Insert_Sort_Algo(Sub1);
	merge_Insert_Sort_Algo(Sub2);
	merge(cont, Sub1, Sub2);
}

void parse_Nb(int ac, char **av, std::vector<int> &_v, std::deque<int> &_d);
void print_cont( std::deque<int> &_d, std::vector<int> &_v);

#endif