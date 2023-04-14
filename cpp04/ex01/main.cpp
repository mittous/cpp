#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    const int NUM_ANIMALS = 6;
    Animal **animals = new Animal*[NUM_ANIMALS];

    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        std::cout <<"hnaaaa"<<std::endl;
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    

    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        std::cout << "Deleting animal: " << i << std::endl;
        delete animals[i];
    }

    // delete[] animals;
    return 0;
}