# ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>






template <typename T>
void iter(T *array, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; array && i < size; i++)
	{
		f(array[i]);
	}
}

template< typename T >
void f( T const & it ) 
{
	std::cout << it  << std::endl; 
}

#endif