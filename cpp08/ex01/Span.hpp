#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		Span();
		Span(const Span &copy);
		~Span();
		Span & operator=(const Span &assign);

		Span(unsigned int size);
		void	addNumber(int element);
		int		shortestSpan();
		int		longestSpan();
	private:
		unsigned int _size;
		std::vector<int> span;
		
};

#endif