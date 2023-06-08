#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
// Destructor
Base::~Base()
{
	std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}

Base *generate (void)
{
	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break;
	case 2:
		return (new C());
		break;
	
	default:
		return (NULL);
		break;
	}
}