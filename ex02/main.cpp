#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    // meta->makeSound();

    // delete meta;
    delete j;
    delete i;

    

    const WrongAnimal *wmeta = new WrongAnimal();
    const WrongAnimal *wi = new WrongCat();

    std::cout << wi->getType() << " " << std::endl;
    wi->makeSound();
    wmeta->makeSound();

    delete wmeta;
    delete wi;

    Animal *animal[10];
    
    for(int i = 0; i < 5; i++)
    {
        animal[i] = new Dog();
        std::cout << i << " " << animal[i]->getType() << std::endl;
        animal[i]->makeSound();
    }
    for(int i = 5; i < 10; i++)
    {
        animal[i] = new Cat();
        std::cout << i << " " << animal[i]->getType() << std::endl;
        animal[i]->makeSound();
    }
    for(int i = 0; i < 10; i++)
    {
        delete animal[i];
    }
    return 0;
}

__attribute__((destructor))
static void destructor() {
	system("leaks -q a.out");
}