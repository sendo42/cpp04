#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type_;
    
    public:
        WrongAnimal(WrongAnimal &wrongAnimal);
        WrongAnimal& operator=(const WrongAnimal &wrongAnimal);
        void makeSound() const;
        std::string getType() const;

        WrongAnimal(void);
        ~WrongAnimal();

};

#endif