#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstdbool>
struct Data
{
	int value;
	Data(int value);
}; 


class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &copy);
		~Serializer();
		Serializer & operator=(const Serializer &assign);
		
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private:
		
};

#endif