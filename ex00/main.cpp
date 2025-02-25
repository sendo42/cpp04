#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal *wmeta = new WrongAnimal();
    const WrongAnimal *wi = new WrongCat();

    std::cout << wi->getType() << " " << std::endl;
    wi->makeSound();
    wmeta->makeSound();

    delete wmeta;
    delete wi;
    
    return 0;
}