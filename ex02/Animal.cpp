#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Constructor" << std::endl;
    
}

Animal::Animal(Animal &animal)
{
    std::cout << "copy constructor" << std::endl;
    if(this != &animal)
        *this = animal;
}
Animal& Animal::operator=(const Animal &animal)
{
    std::cout << "copy assginment" << std::endl;
    if(this != &animal)
        this->type_ = animal.getType();
    return *this;
}


Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

std::string  Animal::getType() const
{
    return type_;
}

void Animal::makeSound() const
{
    std::cout << "レビュー通してください" << std::endl;       
}


