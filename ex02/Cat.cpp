#include "Cat.hpp"

Cat::Cat(void): Animal()
{
    std::cout << "Cat Constructor create brain" << std::endl;
    brain = new Brain();
    type_ = "Cat";
}

Cat::Cat(Cat &cat)
{
    std::cout << "copy constructor" << std::endl;
    if(this != &cat)
        *this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
    if(this != &cat)
        this->type_ = cat.type_;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor delete brain" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;        
}
