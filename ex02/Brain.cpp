#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Constructor" << std::endl;
    
}

Brain::Brain(Brain &Brain)
{
    std::cout << "copy constructor" << std::endl;
    if(this != &Brain)
        *this = Brain;
}
Brain& Brain::operator=(const Brain &Brain)
{
    std::cout << "copy assginment" << std::endl;
    if(this != &Brain)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = Brain.ideas[i];
    }
    return *this;
}


Brain::~Brain()
{
    std::cout << "Animal Destructor" << std::endl;
}

void Brain::print_ideas()
{
    for(int i = 0; i < 100; i++)
    {
        std::cout << "this is idea: "<< i << ideas[i] << std::endl;
    }
}

void Brain::setBrain(const std::string &idea)
{
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = idea;
    }
}