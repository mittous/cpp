#include "PmergeMe.hpp"

int main()
{
    PmergeMe p;

    p._v.push_back(4);
    p._v.push_back(8);
    p._v.push_back(1);
    p._v.push_back(3);
    p._v.push_back(6);
    p._v.push_back(5);
    p._v.push_back(2);
    p._v.push_back(7);
    insertion_Sort(p._v);
    for (std::vector<int>::iterator it = p._v.begin(); it != p._v.end(); it++)
        std::cout << *it << std::endl;
    return 0;
}