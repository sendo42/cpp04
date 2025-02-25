#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        Dog(Dog &dog);
        Dog& operator=(const Dog &dog);
        ~Dog();
        void makeSound() const;
    private:
        Brain *brain;


};


#endif