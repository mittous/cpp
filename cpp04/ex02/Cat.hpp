#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat & operator=(const Cat &assign);
		void makeSound() const;
		std::string getType() const;
		private:
		Brain *catBrain;
};


#endif