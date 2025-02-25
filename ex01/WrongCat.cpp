#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
    std::cout << "WrongCat Constructor" << std::endl;
    type_ = "WrongCat";
}

WrongCat::WrongCat(WrongCat &wrongcat)
{
    std::cout << "copy constructor" << std::endl;
    if(this != &wrongcat)
        *this = wrongcat;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongcat)
{
    if(this != &wrongcat)
        this->type_ = wrongcat.type_;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "wrong cat" << std::endl;
}
