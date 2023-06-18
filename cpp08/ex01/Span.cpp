#include "Span.hpp"

Span::Span()
{
	_size = 0;
	span.resize(_size);
}

Span::Span(const Span &copy)
{
	(void)copy;
}

Span::~Span()
{
}

Span & Span::operator=(const Span &assign)
{
	(void) assign;
	return *this;
}

Span::Span(unsigned int size) : _size(size){
}

void Span::addNumber(int elem)
{
	if (_size == span.size()){
		throw std::range_error("Error: you are trying to add an element to a full container.");
		return ;
	}
	span.push_back(elem);
}

int	Span::shortestSpan()
{
	if (span.size() <= 1){
		throw std::exception();
		return (-1);
	}
	sort(span.begin(), span.end());
	int tmp = 0;
	for (unsigned int i = 0; i < span.size() - 1; i++){
		tmp = span[i + 1] - span[i];
		if (tmp < span[i + 1] - span[i])
			tmp = span[i + 1] - span[i];
	}
	return (tmp);
}

int Span::longestSpan()
{
	if (span.size() <= 1){
		throw std::exception();
		return (-1);
	}
	sort(span.begin(), span.end());
	return (span[span.size() - 1] - span[0]);
}