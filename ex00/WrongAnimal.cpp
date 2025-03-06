#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Constructor" << std::endl;
    
}

WrongAnimal::WrongAnimal(WrongAnimal &wronganimal)
{
    std::cout << "copy constructor" << std::endl;
    if(this != &wronganimal)
        *this = wronganimal;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
    std::cout << "copy assginment" << std::endl;
    if(this != &wronganimal)
        this->type_ = wronganimal.getType();
    return *this;
}


WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}

std::string  WrongAnimal::getType() const
{
    return type_;
}

void WrongAnimal::makeSound() const
{
    std::cout << "レビュー通してください" << std::endl;
}

