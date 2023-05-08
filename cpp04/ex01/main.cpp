#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    int NUM_ANIMALS = 2;
    Animal **animals = new Animal*[NUM_ANIMALS];

    for (int i = 0; i < NUM_ANIMALS/2; i++)
    {
        animals[i] = new Dog();
    }
    

    for (int i = NUM_ANIMALS/2; i < NUM_ANIMALS; i++)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < 2; i++)
    {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        delete animals[i];
    }
    delete[] animals;
    return 0;
}