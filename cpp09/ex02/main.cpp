#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    struct timeval _V_start, _V_end;
    struct timeval _D_start, _D_end;
    std::vector<int> _v;
    std::deque<int> _d;
    parse_Nb(ac, av, _v, _d);
    
    std::cout << "Before:   ";
    for(std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
        std::cout << *it << " ";


    gettimeofday(&_V_start, NULL);
    merge_Insert_Sort_Algo(_v);
    gettimeofday(&_V_end, NULL);

    long _V_sec = _V_end.tv_sec - _V_start.tv_sec;
    long _V_microsec = _V_end.tv_usec - _V_start.tv_usec;
    double _V_time = _V_sec + _V_microsec / 1000000.0;

    std::cout << std::endl << "After:    ";
    for(std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
        std::cout << *it << " ";
    
    
    gettimeofday(&_D_start, NULL);
    merge_Insert_Sort_Algo(_d);
    gettimeofday(&_D_end, NULL);

    long _D_sec = _D_end.tv_sec - _D_start.tv_sec;
    long _D_microsec = _D_end.tv_usec - _D_start.tv_usec;
    double _D_time = _D_sec + _D_microsec / 1000000.0;
    
    std::cout << "\nTime to process a range of " << _v.size() << " elements with std::vector: " << std::fixed << std::setprecision(5) << _V_time << " us." << std::endl;
    std::cout << "Time to process a range of " << _d.size() << " elements with std::deque: " << std::fixed << std::setprecision(5)<< _D_time << " us." << std::endl;
    return 0;
}