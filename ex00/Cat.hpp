#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat(void);
        Cat(Cat &cat);
        Cat& operator=(const Cat &cat);
        ~Cat();
        void makeSound() const;


};


#endif