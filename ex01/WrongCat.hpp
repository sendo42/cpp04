#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat &wrongCat);
        WrongCat& operator=(const WrongCat &wrongCat);
        ~WrongCat();
        void makeSound() const;

        
};

#endif