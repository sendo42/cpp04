#include "Dog.hpp"

Dog::Dog(void): Animal()
{
    std::cout << "Dog Constructor create brain" << std::endl;
    type_ = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog &dog)
{
    std::cout << "copy constructor" << std::endl;
    if(this != &dog)
        *this = dog;
}

Dog& Dog::operator=(const Dog &dog)
{
    if(this != &dog)
        this->type_ = dog.type_;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor delete brain" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "bowwow" << std::endl;
}