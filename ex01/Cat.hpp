#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:
        Cat(void);
        Cat(Cat &cat);
        Cat& operator=(const Cat &cat);
        ~Cat();
        void makeSound() const;
    private:
        Brain *brain;


};


#endif